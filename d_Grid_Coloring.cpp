#include <bits/stdc++.h>
using namespace std;

int main() {
    int H,W;
    int N;
    cin>>H>>W>>N;
    vector<int>vec;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        for(int j=0;j<a;j++){
            vec.push_back(i+1);
        }
    }
    vector<vector<int>>aaa(H,vector<int>(W));
    int count=0;
    for(int i=0;i<H;i++){
        if(i%2==0){
        for(int j=0;j<W;j++){
            aaa.at(i).at(j)+=vec.at(count);
            count++;
        }
       }
       else{
         for(int j=W-1;0<=j;j--){
            aaa.at(i).at(j)+=vec.at(count);
            count++;
        }          
       }
    }
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cout<<aaa.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
}