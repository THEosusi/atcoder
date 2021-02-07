#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >> S;
    sort(S.begin(),S.end());
    vector<char>vec(26);
    vec={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int>vec2(26,0);
   
 
    for(int i=0;i<S.size();i++){
        for(int j=0;j<26;j++){
        if(S.at(i)==vec.at(j)){
            vec2.at(j)++;
          }
        }
    }
    for(int i=0;i<26;i++){
     if(vec2.at(i)==0){
         cout << vec.at(i)<<endl;
         return 0;
      }
    }
    cout <<"None"<<endl;

}