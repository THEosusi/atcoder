#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B;
    cin >>A>>B;
for(int i=0 ;i<10000;i++){
    int za=i*8/100;
    int zb=i*10/100;
    if(A==za &&B==zb){
        cout <<i <<endl;
        return 0;
    }
}
cout <<-1<<endl;
}
