#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    long long count=vec.at(0);
    long long ima=vec.at(0);
    for(int i=1;i<N;i++){
        if(vec.at(i)<ima){
            ima=vec.at(i);
        }
        else if(vec.at(i)>ima){
            count+=vec.at(i)-ima;
            ima=vec.at(i);
        }
    }
    cout<<count<<endl;

}