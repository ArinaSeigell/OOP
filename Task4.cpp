#include <iostream>

class Time {
private:
    static int objectCount;  // Счётчик созданных объектов
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        std::cout << "Constructor called with parameters (" << h << ", " << m << ", " << s << ")." << std::endl;
        ++objectCount;
        std::cout << "Current number of objects: " << objectCount << std::endl;
        Set(h, m, s);
    }

    ~Time() {
        --objectCount;
        std::cout << "Destructor called." << std::endl;
        std::cout << "Current number of objects: " << objectCount << std::endl;
    }

    void Set(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
        Normalize();
    }

    // Метод Normalize
    void Normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        else if (seconds < 0) {
            minutes -= ((-seconds + 59) / 60) + 1;
            seconds = 60 + (seconds % 60);
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        else if (minutes < 0) {
            hours -= ((-minutes + 59) / 60) + 1;
            minutes = 60 + (minutes % 60);
        }
        if (hours >= 24) {
            hours %= 24;
        }
        else if (hours < 0) {
            hours = 24 + (hours % 24);
        }
    }

    // Количество секунд от начала дня
    int ToSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

    // Оператор вычитания
    Time operator-(const Time& other) const {
        Time result(hours, minutes, seconds);
        result -= other;
        return result;
    }

    // Оператор уменьшения времени
    Time& operator-=(const Time& other) {
        hours -= other.hours;
        minutes -= other.minutes;
        seconds -= other.seconds;
        Normalize();  // Приведение результата к корректному диапазону
        return *this;
    }

    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    int getHours() const { return hours; }
    int getMinutes() const { return minutes; }
    int getSeconds() const { return seconds; }
};

// Инициализация статического члена
int Time::objectCount = 0;

void printTime(const Time& t) {
    std::cout << t.getHours() << ":" << t.getMinutes() << ":" << t.getSeconds() << std::endl;
}

int main() {
    Time t1(10, 30, 45);
    Time t2(-1, -20, -35);
    Time t3(25, 70, 120);

    printTime(t1);   // Должно быть 10:30:45
    printTime(t2);   // Должно быть 22:39:25
    printTime(t3);   // Должно быть 02:11:00

    Time t4 = t1 - t2;
    printTime(t4);   // Должно быть 12:51:20

    t1 -= t2;
    printTime(t1);   // Должно быть 12:51:20

    if (t1 == t4) {
        std::cout << "Times are equal" << std::endl;
    }
    else {
        std::cout << "Times are different" << std::endl;
    }

    // Можно написать любые тесты, я привела эти для примера 

    return 0;
}
