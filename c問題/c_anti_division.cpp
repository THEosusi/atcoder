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
long long lcm(long long a, long long b)
{
   return a * b / gcd(a, b);
}
int main() {
    long long A,B,C,D;
    cin>>A>>B>>C>>D;
    long long E=gcd(C,D);
    long long F=lcm(C,D);
    cout<<B-(B/C)-(B/D)+(B/F)-(A-1-(A-1)/C-(A-1)/D+(A-1)/F)<<endl;
    
}