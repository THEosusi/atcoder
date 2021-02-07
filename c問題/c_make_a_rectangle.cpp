#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    long long count0=vec.at(0);
    long long kazu0=0;
    long long kekka0=0;
    long long kekka1=0;
    long long count=1;
    for(int i=1;i<N;i++){
        if(count0==vec.at(i)){
            count++;
            if(kazu0==0){
            kekka0=count0;
            kazu0=1;
            }
            else if(kazu0==1){
                if(kekka0!=vec.at(i)){
                    kekka1=vec.at(i);
                    break;
                }
                else if(count>=4&&kekka0==vec.at(i)){
                    kekka1=vec.at(i);
                    break;
                }
            }
        }
        else{
            count0=vec.at(i);
            count=0;
        }
    }
        cout<<kekka1*kekka0<<endl;
    }