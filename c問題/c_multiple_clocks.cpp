#include <bits/stdc++.h>
using namespace std;
  long long  gcd( long long a,  long long b)
{ if (a%b == 0){
    return(b);
   }
   else{
       return(gcd(b, a%b));
   }
}
 long long lcm( long long a,  long long b)
{
   return a / gcd(a, b)*b;
}
int main() {
    int N;
    cin>>N;
   long long a;
    cin>>a;
        for(int i=1;i<N;i++){
             long long b;
             cin>>b;
             a=lcm(b,a);
        }

    cout<<a<<endl;
}