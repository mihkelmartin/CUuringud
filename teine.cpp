#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {

    int alamstringi_pikkus;
    string genoom;
    cin >> alamstringi_pikkus >> genoom;
    map<string , int> alamstringid;

    string maxString = "";
    int max = 0;
    for (int i = 0; genoom.length() - i >= alamstringi_pikkus; i++) {
        string alamstring = genoom.substr(i, alamstringi_pikkus);
        auto it = alamstringid.find(alamstring);
        int mitu = 1;
        if(it == alamstringid.cend()){
            alamstringid.insert(pair<string,int>(alamstring,1));
        } else {
            mitu = it->second + 1;
            it->second = mitu;
        }
        if(mitu > max){
            max = mitu;
            maxString = alamstring;
        } else if(mitu == max){
            if(alamstring  < maxString) {
                maxString = alamstring;
            }
        }
    }
    cout << maxString;
}
