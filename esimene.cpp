#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {

    // vektor
    vector<int> mina;
    int a = 5;
    mina.push_back(a);
    mina.push_back(a*2);
    mina.push_back(a*3);
    mina.push_back(a*5);
    mina.push_back(a*6);
    mina.push_back(a);

    // set
    set<int> kuukaart;
    // set<int, greater<int>> kuukaartteistpidi;
    kuukaart.insert(1);
    kuukaart.insert(3);
    kuukaart.insert(2);
    kuukaart.insert(1);
    kuukaart.insert(2);
    auto i = kuukaart.find(4);
    if(i == kuukaart.cend()){
        cout<<"EI" << endl;
    } else {
        cout<<"JAH" << endl;
    }
    for(auto it3 : kuukaart){
        cout<<it3 << endl;
    }


    // map
    map<int, vector<int>> kaart;
    //map<int, vector<int>, greater<int>> kaartteistpidi;

    kaart.insert(pair<int, vector<int>>(1, mina));
    auto it = kaart.find(1);
    if(it == kaart.cend()){
        cout<<"EI";
    } else {
        for(auto it2 : it->second){
            cout << it2 << endl;
        }
    }

}
