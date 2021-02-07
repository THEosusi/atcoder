#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long a, long long b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}
int main() {
    int N;
    long long X;
    long long saidai;
    cin >>N>>X;
    for(int i=0;i<N;i++){
        long long A;
        cin >>A;
        if(i==0){
            saidai=abs(X-A);
            continue;
        }
        long long B=abs(X-A);
        saidai=gcd(saidai,B);
    }
    cout<<saidai<<endl;
}