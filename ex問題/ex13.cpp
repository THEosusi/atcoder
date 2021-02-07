#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  for ( int i=0 ;i<N;i++){
   cin >> vec.at(i); }
    int X ;
   for (int i= 0 ; i <N;i++){
   X += vec.at(i);}
   
   for (int i=0;i<N;i++){
       if(vec.at(i)<X/N){
           cout << X/N - vec.at(i)<<endl;
           continue ;
       }
       cout<<vec.at(i)-X/N<<endl;
   }
}