#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<vector<int>>vec(3,vector<int>(3));
      vector<vector<char>>bingo(3,vector<char>(3,'a'));
      for(int i=0;i<3;++i){
          for(int j=0;j<3;++j){
              cin>>vec.at(i).at(j);
          }
      }
      int N;
      cin >> N;
      vector<int>vecb(N);
      for(int i=0;i<N;++i){
          cin >> vecb.at(i);
          for(int j=0;j<3;j++){
              for(int k=0;k<3;k++){
                  if(vecb.at(i)==vec.at(j).at(k)){
                      bingo.at(j).at(k)='b';
                  }
              }
          }
      }
      
      for(int i=0;i<3;i++){
        if(bingo.at(i).at(0)=='b'&&bingo.at(i).at(1)=='b'&&bingo.at(i).at(2)=='b'){
             cout << "Yes" <<endl;
             return 0;
         }
         else if(bingo.at(0).at(i)=='b'&&bingo.at(1).at(i)=='b'&&bingo.at(2).at(i)=='b'){
             cout << "Yes" <<endl;
             return 0;
         }
      }
    if(bingo.at(0).at(0)=='b'&&bingo.at(1).at(1)=='b'&&bingo.at(2).at(2)=='b'){
           cout << "Yes" <<endl;
             return 0;
      }
     else if(bingo.at(0).at(2)=='b'&&bingo.at(1).at(1)=='b'&&bingo.at(2).at(0)=='b'){
           cout << "Yes" <<endl;
             return 0;
      }
      cout << "No"<<endl;
}