#include<iostream>
#include<vector>
#include<map>
#include<set>

usingnamespacestd;

intmain(){

    intalamstringi_pikkus;
    stringgenoom;
    cin>>alamstringi_pikkus>>genoom;
    map<string,int>alamstringid;

    stringmaxString="";
    intmax=0;
    for(inti=0;genoom.length()-i>=alamstringi_pikkus;i++){
        stringalamstring=genoom.substr(i,alamstringi_pikkus);
        autoit=alamstringid.find(alamstring);
        intmitu=1;
        if(it==alamstringid.cend()){
            alamstringid.insert(pair<string,int>(alamstring,1));
        }else{
            mitu=it->second+1;
            it->second=mitu;
        }
        if(mitu>max){
            max=mitu;
            maxString=alamstring;
        }elseif(mitu==max){
            if(alamstring<maxString){
                maxString=alamstring;
            }
        }
    }
    cout<<maxString;
}
