#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
 if(b == 0) return a;
 return gcd(b,a%b);
 }
 long long lcm(long long a,long long b){
 long long g = gcd(a,b);
 return a/g * b;
 }
int main() {
    long long A,B;
    cin>>A>>B;
    long long P=gcd(A,B);
    map<long long,long long>mp;
    for(long long i = 2; i*i <= P; ++i){
        while(P%i==0){
            P/=i;
            mp[i]++;
        }
    }
    if(P!=1){
        mp[P]++;
    }
    if(mp.size()==0){
        cout<<1<<endl;
    }
    else{

    }

}