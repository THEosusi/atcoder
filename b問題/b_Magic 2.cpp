#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,C;
    cin >> A>>B>>C;
    int N;
    cin >>N;
    int counta=0;
    for(int i=0;i<10;i++){
        if(A<B){
            break;
        }
        B*=2;
        counta++;
    }
    
    for(int i=0;i<10;i++){
        if(B<C){
            break;
        }
        C*=2;
        counta++;
    }
    if(counta<=N)  {
        cout << "Yes"<<endl;
    }
    else if (counta>N)
        cout <<"No"<<endl;
    
}
