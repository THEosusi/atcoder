#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double N,K;
    cin >>N>>K;
    double sum=0;
        int count;
        double summ;
    for(int i=1;i<=N;i++){
        int k=i;
        count=0;
        for(;;){
            if(k<K){
                k*=2;
                count++;
            }
            else{
                summ=1/N;
                for(int j=0;j<count;j++){
                    summ/=2;
                }
                sum+=summ;
                break;
            }
            }
        }
        cout <<fixed << setprecision(10)<<sum<<endl;

}