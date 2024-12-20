#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <cctype>


using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b) { 
    return a.second > b.second;
}

int main(int argc, char* argv[]){
    ifstream fin;
    string path = argv[1]; 
    fin.open(path);

    ofstream fout;  
    string path1 = argv[2];  
    fout.open(path1);

    map<string, int> freqs;
    string line;

    int wcount = 0;
    fout << "Слово" << ";" << "Частота" << ";" << "Частота (в %)\n";
    string word = "";

    while (getline(fin, line)) {
        for (auto &x : line) {
            if (isalnum(x) || x == '\'' ) {
                word += x;
            }
            else {
                if (!word.empty()) {
                    ++freqs[word];
                    word = "";
                    wcount++;
                }
            }
        }
        if (!word.empty()) {
            ++freqs[word];
            word = "";
            wcount++;
        }
    }

    vector<pair<string, int>> A;
    for (auto& it : freqs) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

  
    for (auto& it : A) {
    //double percent = ((100 * it.second) / (double)(wcount));
    double percent = ((double)it.second / wcount * 100);
    fout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
    fout << it.first << ";" << it.second << ";" << percent << "%" << "\n";
}


    fin.close();
    fout.close();

    return 0;
}