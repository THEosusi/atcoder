#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    
    for(int i = 0;i<N ; ++i){
     cin >> vec.at(i);
    }
    sort(vec.begin(),vec.end());
    int JIN=99999999;
   for (int i= vec.at(0);i<=vec.at(N-1); i++){
        int MAXMAN=0;
       for(int j=0;j<N;j++){
           int MAX =0;
          MAX= ((vec.at(j))-i)*((vec.at(j))-i);
          MAXMAN += MAX;
          }
       if(JIN >= MAXMAN){
           JIN = MAXMAN;
          }
       }
        cout << JIN <<endl;
   }