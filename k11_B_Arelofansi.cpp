
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
int main(){

    string sona1, sona2;
    cin >> sona1 >> sona2;
    vector<char> eba = {'a','e','i','o','u'};
    for (char s : eba) {
        // NB NB NB Ei tööta string.replace
        // Ei tööta cbegin ja cend vaid just begin ja end
        // NB Ei tee siin ka Uppercasei mida ei oska
        replace(sona1.begin(), sona1.end(), s, 'X');
        replace(sona2.begin(), sona2.end(), s, 'X');
    }
    if(sona1 == sona2 ){
        cout << "SAMA";
    } else {
        cout << "ERINEV";
    }
}

