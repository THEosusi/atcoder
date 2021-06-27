#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int>A(N);
    vector<int>B(N);
    vector<int>C(N);
    for(int i=0;i<N;i++){
        cin>>A.at(i);
    }
    for(int i=0;i<N;i++){
        cin>>B.at(i);
    }
    for(int i=0;i<N;i++){
        cin>>C.at(i);
    }
    vector<int>D(N);
    for(int i=0;i<N;i++){
        D.at(C.at(i)-1)++;
    }
    vector<int>E(N);
    for(int i=0;i<N;i++){
        E.at(B.at(i)-1)+=D.at(i);
    }
    long long sum=0;
    for(int i=0;i<N;i++){
        sum+=E.at(A.at(i)-1);
    }
    cout<<sum<<endl;
}