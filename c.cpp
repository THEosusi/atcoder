#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H,W;
  cin>>H>>W;
  vector<vector<char>>vec(H,vector<char>(W));
  vector<vector<int>>vec2(H,vector<int>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin>>vec.at(i).at(j);
    }
  }

  int count=0;
  for(int i=1;i<H-1;i++){
    for(int j=1;j<W-1;j++){
      if(vec.at(i).at(j)=='#'){
        continue;
      }
     else{
       if(vec.at(i-1).at(j)=='#'&&vec.at(i+1).at(j)=='#'&&vec.at(i).at(j-1)=='.'&&vec.at(i).at(j+1)=='.'){
       continue;
     }
    if(vec.at(i-1).at(j)=='.'&&vec.at(i+1).at(j)=='.'&&vec.at(i).at(j-1)=='#'&&vec.at(i).at(j+1)=='#'){
       continue;
  }
       if(vec.at(i-1).at(j)=='#'){
       vec2.at(i).at(j)++;
     }
     if(vec.at(i+1).at(j)=='#'){
       vec2.at(i).at(j)++;
     }
     if(vec.at(i).at(j-1)=='#'){
       vec2.at(i).at(j)++;
     }
     if(vec.at(i).at(j+1)=='#'){
       vec2.at(i).at(j)++;
     }
     }
    }
  }
   for(int i=1;i<H-1;i++){
    for(int j=1;j<W-1;j++){
      if(vec2.at(i).at(j)>=1){
        count+=vec2.at(i).at(j)-1;
      }
   }
   }
   cout<<count*2+4<<endl;
  
}