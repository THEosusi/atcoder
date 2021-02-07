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
        vec2.at(vec.at(i)-1)=i+1;
    }
    for(int i=0;i<N;i++){
        cout<<vec2.at(i)<<endl;
    }  
    

}