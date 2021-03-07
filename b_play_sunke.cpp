#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<tuple<long long,long long ,long long>>A;
    for(int i=0;i<N;i++){
        long long a,b,c;
        cin>>a>>b>>c;
   A.push_back(make_tuple(b, a, c));
    }
    sort(A.begin(),A.end());
  for (int i=0;i<N;i++) {
      if(get<1>(A.at(i))<get<2>(A.at(i))){
          cout<<get<0>(A.at(i))<<endl;
          return 0;
      }
  }
  cout<<-1<<endl;

}