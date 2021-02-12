#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N,C;
    cin>>N>>C;
    vector<pair<long long ,long long>>pai;
    for(long long i=0;i<N;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        pai.push_back(make_pair(a-1,c));
        pai.push_back(make_pair(b,-c));
    }
    sort(pai.begin(),pai.end());
    long long sum=0;
    long long aaa=pai.at(0).second;
    long long kizyun=pai.at(0).first;
    long long mainasu=0;
    for(long long i=1;i<2*N;i++){
        if(i==2*N-1){
            sum+=min(aaa,C)*(pai.at(i).first-kizyun);
        }
        else{
        if(kizyun==pai.at(i).first){
            aaa+=pai.at(i).second;
        }
        else{
            sum+=min(aaa,C)*(pai.at(i).first-kizyun);
            kizyun=pai.at(i).first;
            aaa+=pai.at(i).second;
        }
    }
    }
    cout<<sum<<endl;

}