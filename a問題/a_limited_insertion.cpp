#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<int>vec(N);
    vector<int>vec2;
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
        if(vec.at(i)>i+1){
            cout<<-1<<endl;
            return 0;
        }
    }
      int count;
    int maxx=-1;
    for(int j=0;j<N;j++){
            count=0;
            maxx=-1;
    for(int i=0;i<vec.size();i++){
        if(vec.at(i)==i+1){
            count=i+1;
            maxx=max(maxx,count);
        }
    }
    if(maxx==-1){
        cout<<-1<<endl;
    }
    else{
        vec2.push_back(maxx);
        vec.erase(vec.begin()+maxx-1);
    }
    }
    reverse(vec2.begin(),vec2.end());
    for(int i=0;i<vec2.size();i++){
        cout<<vec2.at(i)<<endl;
    }
}