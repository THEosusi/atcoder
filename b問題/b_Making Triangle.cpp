#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin >> vec.at(i);
    }
    int count=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(vec.at(i)==vec.at(j)||vec.at(j)==vec.at(k)||vec.at(i)==vec.at(k)){
                    continue;
                }
                if(vec.at(i)+vec.at(j)>vec.at(k)&&vec.at(i)+vec.at(k)>vec.at(j)&&vec.at(j)+vec.at(k)>vec.at(i)){
                    count++;
                }
                
            }
        }
    }
    cout <<count<<endl;
}