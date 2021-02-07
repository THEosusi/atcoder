#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    set<long long>S;
    vector<long long>vec;
    for(long long i=1;i<10000000;i++){
        if(N%i==0){
        if(i==N/i){
        if(S.count(i)){
            continue;
        }
       vec.push_back(i);
         S.insert(i);
        }
        else{
        if(S.count(N/i)){
            continue;
        }
        if(S.count(i)){
            continue;
        }
       vec.push_back(i);
        vec.push_back(N/i);
            S.insert(i);
            S.insert(N/i);
        }
        
    }
    }
    sort(vec.begin(),vec.end());
    for(long long i=0;i<vec.size();i++){
        cout<<vec.at(i)<<endl;
    }
}
    
    