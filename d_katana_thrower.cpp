#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,H;
    cin>>N>>H;
    vector<pair<long long,long long>>veca;
    vector<pair<long long,long long>>vecb;
    for(long long i=0;i<N;i++){
        long long a,b;
        cin>>a>>b;
        veca.push_back(make_pair(a,i));
        vecb.push_back(make_pair(b,i));       
    }
    sort(veca.begin(),veca.end());
    reverse(veca.begin(),veca.end());    
    sort(vecb.begin(),vecb.end());
    reverse(vecb.begin(),vecb.end());
    long long dame=veca.at(0).first;
    long long kiro= veca.at(0).second;
    long long count=0;
    for(long long i=0;i<N;i++){
        if(dame<=vecb.at(i).first){
            count++;
            H-=vecb.at(i).first;
        }
        else{
            if(H%dame==0){
                count+=H/dame;
                break;
            }
            else{
                count+=H/dame+1;
                break;
            }
        }
        if(H<=0){
            break;
        }
        if(i==N-1){
             if(H%dame==0){
                count+=H/dame;
                break;
            }
            else{
                count+=H/dame+1;
                break;
            }           
        }
    }
    cout<<count<<endl;
}