#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin >>N;
    vector<long long>vec(N);
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    bool low =false;
    bool hight =false;
    int count=0;
    long long standard=vec.at(0);
    for(int i=0;i<N;i++){
        if((low==false)&&(hight==false)){
        if(standard>vec.at(i)){
                standard=vec.at(i);
                low =true;
        }
        else if(standard<vec.at(i)){
                standard=vec.at(i);
                hight =true;
        }
     }
        if(hight){
            if(standard>vec.at(i)){
                count++;
                standard =vec.at(i);
                hight =false;
            }
            else{
                standard =vec.at(i);  
            }
        }
        if(low){
            if(standard<vec.at(i)){
                count++;
               standard =vec.at(i);
                low =false;
            }
            else{
               standard =vec.at(i);           
            }
        }
    }
    cout<<count+1<<endl;

}