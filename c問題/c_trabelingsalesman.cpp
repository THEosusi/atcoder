#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int K ,N;
    cin >> K >>N;
    vector<int> vec(N);
    for(int i=0;i<N;i++){
        cin >>vec.at(i);
    }
    int sum=0;
    for(int i=1;i<N;i++){
        int sumsum=0;
        sumsum = vec.at(i)-vec.at(i-1);
        sum =max(sum,sumsum);
     }
      int MINMIN=0;
      MINMIN=max(vec.at(0)+K-vec.at(N-1),sum);
      cout << K -MINMIN <<endl;
}