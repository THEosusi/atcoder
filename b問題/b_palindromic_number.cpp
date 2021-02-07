#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B;
    cin >> A>>B;
    vector<int> vec;
    int count=0;
    int x;
    for (int i=0;i<B-A+1;i++){
     vec.push_back(A+i);}
    

     for (int i=0;i<B-A+1;i++){
        
          vector <int> kore;//まいかい宣言うわがきできる
       for(int j =1 ;j<100000;j*=10){
           x =vec.at(i)/j%10;
           kore.push_back(x);}
          
           if((kore.at(0)==kore.at(4))&&(kore.at(1)==kore.at(3))){
              ++count;
            }
           }  
          
          cout << count << endl;
     
}