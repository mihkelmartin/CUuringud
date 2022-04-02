
#include <string>
#include <iostream>
#include <map>

using namespace std;

int main() {
    string sisend;
    cin >> sisend;
    map<string, int> tahe_kood = {
            {"A", 2},
            {"B", 2},
            {"C", 2},
            {"D", 3},
            {"E", 3},
            {"F", 3},
            {"G", 4},
            {"H", 4},
            {"I", 4},
            {"J", 5},
            {"K", 5},
            {"L", 5},
            {"M", 6},
            {"N", 6},
            {"O", 6},
            {"P", 7},
            {"Q", 7},
            {"R", 7},
            {"S", 7},
            {"T", 8},
            {"U", 8},
            {"V", 8},
            {"W", 9},
            {"X", 9},
            {"Y", 9},
            {"Z", 9},
            {"1", 1},
            {"0", 0}
    };
    for (int i = 0; i < sisend.length(); i++) {
        // NB NB NB sisend[i] annab char-i tagasi, mis on sisuliselt number
        // seega to_string(sisend[i]) annab 69 kui on 'a'

        string vahe(1, sisend[i]);
        // cout << tahe_kood.find(sisend.substr(i, 1))->second;
        cout << tahe_kood.find(vahe)->second;


    }
    cout << endl;
}
