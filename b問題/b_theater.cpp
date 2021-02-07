#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N ;
    cin >> N;
    int X=0;
for(int i=0;i<N;i++){
  int l, r ;
  cin >> l >> r ;
   X += r-l +1;
}
cout << X << endl;

}
