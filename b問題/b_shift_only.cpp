#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //(1)%2==0 (2)==0となるようにしたい。
    int N;
    cin >> N ;
    vector<int> vec(N);
    bool answer =true;
    int count =0;

  for (int i=0; i<N;i++){
     cin>>vec.at(i);
  }
  for(int j=1;  ; j++){
  for(int i=0 ; i<N;i++){ 
     if(vec.at(i)%2==1){
      answer = false;
      break;
     }
     vec.at(i)/=2;
      }
    if(answer){
       count++;
    }
    else {
        break;
    }
  }
  cout << count++ <<endl;
}

 