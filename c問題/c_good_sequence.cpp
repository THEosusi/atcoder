#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    vector<int>vec(100000,0);
    long long count=0;
    for(int i=0;i<N;i++){
        long long A;
        cin >>A;
        if(A>100000){
            count++;
            continue;
        }
        vec.at(A-1)++;
    }
    for(int i=0;i<100000;i++){
        if(vec.at(i)==i+1){
            continue;
        }
        else if(vec.at(i)>i+1){
            count+= (vec.at(i)-i-1);
        }
        else{
            count += vec.at(i);
        }
    }
    cout << count<< endl;
}