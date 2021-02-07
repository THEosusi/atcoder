#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin >>vec.at(i);
    }
    long long count =0;
    long long ki=vec.at(0);
    for(int i=0;i<N;i++){
       if(ki<vec.at(i)){
          ki=vec.at(i);
          continue;
       }
       else {
           count+=ki-vec.at(i);
       }
    }
    cout <<count <<endl;
}