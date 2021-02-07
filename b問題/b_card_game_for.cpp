#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    
    int alice=0;
    for(int i=0;i<N;i+=2){
        alice+=vec.at(i);
        }
    int bob=0;
    for(int i=1;i<N;i+=2){
        bob+=vec.at(i);
    }
    
        cout << alice - bob << endl;
    




}
