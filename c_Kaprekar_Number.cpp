#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long N;
    cin>>N;
    int K;
    cin>>K;
    
for(int i=0;i<K;i++){
    string s1 = to_string(N);
    int aaa=s1.size();
    vector<int>vec(10,0);
    vector<int>vec1(10,0);
    for(int j=0;j<aaa;j++){
        if(s1.at(j)=='0'){
        vec.at(0)++;
        vec1.at(0)++;
        }
        if(s1.at(j)=='1'){
        vec.at(1)++;
        vec1.at(1)++;
        }
        if(s1.at(j)=='2'){
        vec.at(2)++;
        vec1.at(2)++;
        }
        if(s1.at(j)=='3'){
        vec.at(3)++;
        vec1.at(3)++;
        }
        if(s1.at(j)=='4'){
        vec.at(4)++;
        vec1.at(4)++;
        }
        if(s1.at(j)=='5'){
        vec.at(5)++;
        vec1.at(5)++;
        }
        if(s1.at(j)=='6'){
        vec.at(6)++;
        vec1.at(6)++;
        }
        if(s1.at(j)=='7'){
        vec.at(7)++;
        vec1.at(7)++;
        }
        if(s1.at(j)=='8'){
        vec.at(8)++;
        vec1.at(8)++;
        }
        if(s1.at(j)=='9'){
        vec.at(9)++;
        vec1.at(9)++;
        }
    }
    long long a=0,b=0;
    int bbb=aaa-1;
    int ccc=aaa-1;
    for(int j=9;0<=j;j--){
        while(vec.at(j)!=0){
            long long c=j;
            for(int k=0;k<bbb;k++){
                c*=10;
            }
            a+=c;
            vec.at(j)--;
            bbb--;
        }
    }
    ccc-=vec1.at(0);
    for(int j=1;j<=9;j++){
        while(vec1.at(j)!=0){
            long long c=j;
            for(int k=0;k<ccc;k++){
                c*=10;
            }
            b+=c;
            vec1.at(j)--;
            ccc--;
        }
    }
    N=a-b;
}
cout<<N<<endl;
}