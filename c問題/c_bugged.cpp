#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    int sum=0;
    cin >>N;
    int count=0;
    vector<int>vec(N);
    for(int i=0;i<N;i++){
        cin >>vec.at(i);
        sum+=vec.at(i);
        if(vec.at(i)%10==0){
            count++;
        }
    }
    sort(vec.begin(),vec.end());
    if(count==N){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<N;i++){
        if(sum%10==0){
            if(vec.at(i)%10!=0){
            sum-=vec.at(i);
            if(sum%10!=0){
            cout<<sum<<endl;
            return 0;
            }
            else{
                sum+=vec.at(i);
            }
            }
        }
        else{
            cout<<sum<<endl;
            return 0;
        }
    }


}