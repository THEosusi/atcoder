#include "bits/stdc++.h" 
using namespace std;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define rerep(i,a,n) for(ll i=n;i>=a;i--)
#define elif else if
#define all(s) s.begin(),s.end()
typedef long long ll;
int gcd(int a,int b){
    if(a<b)swap(a,b);
    if(a%b==0)return b;
    else return gcd(b,a%b);
}
const double pi=3.14159265358979;
const ll INF = 10e9;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vector<ll> Not_ans;
    ll check;
    bool flag;
    rep(i,2,100000){
      check = i * i;
      if(check > n)break;
      flag = false;
      rep(j,0,Not_ans.size()){
        if(check == Not_ans[j]){
          flag = true;
          break;
        }
      }
      if(flag)continue;
      while(check <= n){
        Not_ans.emplace_back(check);
        check *= i;
      }
    }
    cout << n - Not_ans.size() << endl;
    return 0;
}