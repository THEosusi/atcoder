#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    long long X;
    cin>>N>>X;
    vector<long long>vec;
    for(long long i=0;i<N;i++){
        long long A;
        cin>>A;
        if(A!=X){
            vec.push_back(A);
        }
    }
    if(vec.size()==0){
        cout<<" ";
        
    }
    else{
    for(long long i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    }
    cout<<endl;
}