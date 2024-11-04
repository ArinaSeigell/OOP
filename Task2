#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    std::string word;
    std::multiset<char> common_chars; 
    std::getline(std::cin, word);

    for (char c : word) {
        common_chars.insert(c);
    }

    while (std::getline(std::cin, word)) { 
        if (word.empty()) {
            break;
        }
        std::multiset<char> current_word_chars;
        for (char c : word) {
            current_word_chars.insert(c);
        }

        std::multiset<char> intersection;
        std::set_intersection(
            common_chars.begin(), common_chars.end(),
            current_word_chars.begin(), current_word_chars.end(),
            std::inserter(intersection, intersection.begin())
        );
        common_chars.swap(intersection);
    }

    std::vector<char> sorted_chars(common_chars.begin(), common_chars.end());
    std::sort(sorted_chars.begin(), sorted_chars.end());

    for (const char& c : sorted_chars) {
        std::cout << c;
    }

    return 0;
}
