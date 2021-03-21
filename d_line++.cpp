#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    int X,Y;
    cin>>N>>X>>Y;
    vector<int>vec(N+2);
    for(int i=1;i<N;i++){
        for(int j=i+1;j<=N;j++){
            int a=min(j-i,abs(X-i)+1+abs(j-Y));
            vec.at(a-1)++;
        }
    }
    for(int i=0;i<N-1;i++){
        cout<<vec.at(i)<<endl;
    }

}