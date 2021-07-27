#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(200);
    for(long long i=0;i<N;i++){
        long long A;
        cin>>A;
        vec.at(A%200)++;
    }
    long long count=0;
    for(int i=0;i<200;i++){
        if(vec.at(i)>=2){
            count+=vec.at(i)*(vec.at(i)-1)/2;
        }
    }
    cout<<count<<endl;
    
}