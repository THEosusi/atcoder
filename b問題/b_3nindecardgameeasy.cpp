#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string Sa,Sb,Sc;
    cin>>Sa>>Sb>>Sc;
    string sa=Sa+'.';
    string sb=Sb+'.';
    string sc=Sc+'.';
    int hozon=1;
    int hozona=0;
    int hozonb=0;
    int hozonc=0;
    for(int i=0;i<305;i++){
        if(hozon==1){
            if(sa.at(hozona)=='.'){
                cout<<"A"<<endl;
                return 0;
            }
            else{
                if(sa.at(hozona)=='a'){
                    hozon=1;
                }
                else if(sa.at(hozona)=='b'){
                    hozon=2;
                }
                else if(sa.at(hozona)=='c'){
                    hozon=3;
                }
                hozona++;
                    continue;
            }
        }
        else if(hozon==2){
            if(sb.at(hozonb)=='.'){
                cout<<"B"<<endl;
                return 0;
            }
            else{
                if(sb.at(hozonb)=='a'){
                    hozon=1;
                }
                else if(sb.at(hozonb)=='b'){
                    hozon=2;
                }
                else if(sb.at(hozonb)=='c'){
                    hozon=3;
                }
                hozonb++;
                 continue;
            }
        }
        else if(hozon==3){
            if(sc.at(hozonc)=='.'){
                cout<<"C"<<endl;
                return 0;
            }
            else{
                if(sc.at(hozonc)=='a'){
                    hozon=1;
                }
                else if(sc.at(hozonc)=='b'){
                    hozon=2;
                }
                else if(sc.at(hozonc)=='c'){
                    hozon=3;
                }
                hozonc++;
                    continue;
            }
        }
    }
}