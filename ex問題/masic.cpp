#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<vector<int>> zin(3,vector<int>(3));
    for(int i=0; i<3;++i){
        for(int j=0;j<3;j++){
            cin >> zin.at(i).at(j);
        }
    }
    
    for (int i=0;i<3;++i){
        int sum=0 ;
        for(int j=0; j<3;++j){
            
            sum += zin.at(i).at(j);
        }
        if (sum !=15){ cout << "NG"<< endl;
        return 0;
        }
    }
    for(int i=0; i<3;++i){
        int sum=0;
        for(int j=0; j<3 ;++j){
            sum += zin.at(j).at(i);
        }
        if (sum!=15) {cout<<"NG"<<endl;
        return 0;
        }
    }
     int sum=0;
    for(int i=0,j=0 ;i<3&&j<3;++i,++j){
        sum += zin.at(i).at(j);
    }
    if(sum!=15){
        cout <<"NG"<<endl;
        return 0;
    }
    sum=0;
    for(int i=2,j=0;i>=0&&j<3;--i,++j){
        if(sum!=15){
            cout <<"NG"<<endl;
            return 0;
        }
    }
    cout <<"OK"<<endl;
}
    
    

