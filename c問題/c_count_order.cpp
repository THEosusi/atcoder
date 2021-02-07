#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int>vec(N);
    vector<int>vec2(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    for(int i=0;i<N;i++){
        cin >> vec2.at(i);
    }
    int counta =0;
    int countb =0;
    do{
    for(int i=0; i<N; i++){
        }
        counta++;
     } while(next_permutation(vec.begin(),vec.end()));
     do{
    for(int i=0;i<N;i++){
    }
    countb++;}
    while(next_permutation(vec2.begin(),vec2.end()));
    int souryou=1;
    for(int i=N;0<i;i--){
      souryou*=i;
    } 
    int A=abs((souryou+1-counta)-(souryou+1-countb));
    cout << A <<endl;

}