#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin>>N;
    vector<long long>vec(N);
    for(long long i=0;i<N;i++){
        cin>>vec.at(i);
    }
    long long count=0;
    long long sum=0;
    for(long long i=0;i<N;i++){
        if(i==N-1){
        if(vec.at(i)==i+1){
            count++;
        }
            if(count==1){
                sum+=1;
            }
            else if(count>=2){
                if(count%2==0){
                    sum+=count/2;
                }
                else{
                    sum+=count/2+1;
                }
                
            }
        }
    else{
        if(vec.at(i)==i+1){
            count++;
        }
        else{
            if(count==1){
                sum+=1;
            }
            else if(count>=2){
                if(count%2==0){
                    sum+=count/2;
                }
                else{
                    sum+=count/2+1;
                }
            }
            count=0;
        }
    }
    }
    cout<<sum<<endl;
}