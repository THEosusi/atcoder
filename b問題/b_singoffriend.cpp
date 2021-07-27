#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    double D,H;
    cin>>N>>D>>H;
    vector<double>vec1(N);
    vector<double>vec2(N);
    for(int i=0;i<N;i++){
        cin>>vec1.at(i)>>vec2.at(i);
    }
    double x=H;
    for(int i=0;i<N;i++){
        x=min(x,D*(H-vec2.at(i))/(D-vec1.at(i)));
    }
    cout<< fixed << setprecision(10)<<H-x<<endl;

}