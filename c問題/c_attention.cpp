#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long hidarimuki=0;
    long long migimuki=0;
    long long N;
    string s;
    cin>>N>>s;
    for(long long i=0;i<N;i++){
        if(s.at(i)=='W'){
            migimuki++;
        }
        else{
            hidarimuki++;
        }
    }
    long long saisyou=400000;
    for(long long i=0;i<N;i++){
        if(s.at(i)=='W'){
            saisyou=min(saisyou,hidarimuki);
            hidarimuki++;
        }
    else{
        hidarimuki--;
        saisyou=min(saisyou,hidarimuki);
    }
    }
    cout<<saisyou<<endl;
}