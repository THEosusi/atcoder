#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    long long count=0;
    long long sum=0;
    long long countm=0;
    long long counta=0;
    long long countr=0;
    long long countc=0;
    long long counth=0;

    vector<string>vec(N);
    for(long long j=0;j<N;j++){
        cin>>vec.at(j);
    }
    sort(vec.begin(),vec.end());
    for(long long j=0;j<N;j++){{
            if(vec.at(j).at(0)=='M'){
                countm++;
            }
            else if(vec.at(j).at(0)=='A'){
                counta++;
            }
            else if(vec.at(j).at(0)=='R'){
                countr++;
            }
            else if(vec.at(j).at(0)=='C'){
                countc++;
            }
            else if(vec.at(j).at(0)=='H'){
                counth++;
            }
        }
    }
sum+=countm*countr*countc;
sum+=countm*countr*counth;
sum+=countm*countc*counth;
sum+=counta*countc*counth;
    sum+=countm*counta*countr;
    sum+=countm*counta*countc;
      sum+=countm*counta*counth;
      sum+=counta*countr*countc;
     sum+=counta*countr*counth;
    sum+=countc*countr*counth;
    cout<<sum<<endl;
}