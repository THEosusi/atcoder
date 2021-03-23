#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    long long sum=vec.at(0);
    long long count=0;
    bool aaa=true;
    long long stoock=0;
    for(long long i=1;i<N;i++){
        if(sum*2>=vec.at(i)){
            sum+=vec.at(i);
            stoock++;
        }
        else{
            stoock++;
            count+=stoock;
            sum+=vec.at(i);
            aaa=false;
            stoock=0;
        }
    }
    if(aaa){
        cout<<N<<endl;
    }
    else{
        cout<<N-count<<endl;
    }

}