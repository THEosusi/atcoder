#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    vector<string> vec(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    int A=0,W=0,T=0,R=0;
    for(int i=0;i<N;i++){
        if(vec.at(i)=="AC"){
            A++;
        }
        else if(vec.at(i)=="WA"){
            W++;
        }
        else if(vec.at(i)=="TLE"){
            T++;
        }        
        else if(vec.at(i)=="RE"){
            R++;
        }
    }
    cout<<"AC"<<" "<<"x"<<" "<<A<<endl;
    cout<<"WA"<<" "<<"x"<<" "<<W<<endl;
    cout<<"TLE"<<" "<<"x"<<" "<<T<<endl;
    cout<<"RE"<<" "<<"x"<<" "<<R<<endl;
}