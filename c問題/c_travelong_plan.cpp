#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long sum=0;
    int current=0;
    for(int i=0;i<N;i++){
        sum+=abs(vec.at(i)-current);
        current=vec.at(i);
    }
    sum+=abs(0-vec.at(N-1));
    long long aaa;
    current=0;
    for(int i=0;i<N-1;i++){
        aaa=sum;
        aaa-=abs(vec.at(i)-current);
        aaa-=abs(vec.at(i+1)-vec.at(i));
        aaa+=abs(vec.at(i+1)-current);
        cout<<aaa<<endl;
        current=vec.at(i);
    }
    long long bbb=0;
    current=0;
    for(int i=0;i<N-1;i++){
        bbb+=abs(vec.at(i)-current);
        current=vec.at(i);
    }
    bbb+=abs(0-vec.at(N-2));
    cout<<bbb<<endl;
}