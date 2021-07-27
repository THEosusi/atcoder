#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N;
    cin>>N;
    vector<tuple<int,double,double>>a;
    for(int i=0;i<N;i++){
        int aa;
        double b,c;
        cin>>aa>>b>>c;
        if(aa==2){
            c-=0.1;
        }
        else if(aa==3){
            b+=0.1;
        }
        else if(aa==4){
            c-=0.1;
            b+=0.1;
        }
        a.push_back(make_tuple(aa,b,c));
    }
    long long count=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i>j){
                if(get<2>(a.at(i))>=get<1>(a.at(j))&&get<2>(a.at(i))<=get<2>(a.at(j))){
                    count++;
                    continue;
                }
                else if(get<1>(a.at(i))>=get<1>(a.at(j))&&get<1>(a.at(i))<=get<2>(a.at(j))){
                    count++;
                    continue;
                }
                else if(get<2>(a.at(j))>=get<1>(a.at(i))&&get<2>(a.at(j))<=get<2>(a.at(i))){
                    count++;
                    continue;
                }
                else if(get<1>(a.at(j))>=get<1>(a.at(i))&&get<1>(a.at(j))<=get<2>(a.at(i))){
                    count++;
                    continue;
                }
            }
        }
    }
    cout<<count<<endl;

}