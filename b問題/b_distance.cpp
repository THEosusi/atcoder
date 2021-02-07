#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,D;
    cin>>N>>D;
    int count=0;
    for(int i=0;i<N;i++){
        vector<double>vec(2);
        cin >> vec.at(0)>>vec.at(1);
        double A=sqrt(vec.at(0)*vec.at(0)+vec.at(1)*vec.at(1));
        if (D>=A){
            count ++;
        }
    }
    cout << count <<endl;
}