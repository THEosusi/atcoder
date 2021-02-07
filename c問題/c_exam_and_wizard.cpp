#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<long long>vecA(N);
    vector<long long >vecB(N);
    vector<long long> vecC(N);
    for(int i=0;i<N;i++){
        cin>>vecA.at(i);
    }
    for(int i=0;i<N;i++){
        cin>>vecB.at(i);
    }
        long long summa=0;
        long long mainasu=0;
    for(int i=0;i<N;i++){
      long long dif = vecA[i] - vecB[i];
        if (dif < 0) {
            summa -= dif;
           ++mainasu;
         }
        else vecC.push_back(dif);      
    }
        if(summa==0){
        cout<<0<<endl;
        return 0;
    }
    sort(vecC.begin(),vecC.end());
    reverse(vecC.begin(),vecC.end());
    long long AAA=0;
    for(int i=0;i<N;i++){
        if(vecC.at(i)>0){
            AAA+=vecC.at(i);
            mainasu++;
        if(AAA>=summa){
         cout<<mainasu<<endl;
         return 0;
       }
        }
    }
        cout<<-1<<endl;
}