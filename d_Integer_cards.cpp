#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,M;
    cin>>N>>M;
    vector<long long>vec(N);
    long long saisyou=100000000000;
    long long sum=0;
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(aaa.begin(),aaa.end());  
    vector<pair<long long ,long long>>aaa;
     for(long long i=0;i<M;i++){
        long long a,b;
        cin>>a>>b;
        aaa.push_back(make_pair(b,a));
    }
    sort(aaa.begin(),aaa.end());
    reverse(aaa.begin(),aaa.end());
  for(int i=0;i<M;i++){
      long long keisoku=0;
      if(aaa.at(i).first>vec.at(i+c)){
          
      }
  }

}