#include <bits/stdc++.h>
using namespace std;
 
int main() {
     long long mod=1000000007;
    long long N;
    string s;
    cin>>N>>s;
    vector<int>vec(26,0);
    for(int i=0;i<N;i++){
        if(s.at(i)=='a'){
            vec.at(0)++;
        }
        else if(s.at(i)=='b'){
            vec.at(1)++;
        }
        else if(s.at(i)=='c'){
            vec.at(2)++;
        }
        else if(s.at(i)=='d'){
            vec.at(3)++;
        }
        else if(s.at(i)=='e'){
            vec.at(4)++;
        }
        else if(s.at(i)=='f'){
            vec.at(5)++;
        }
        else if(s.at(i)=='g'){
            vec.at(6)++;
        }
        else if(s.at(i)=='h'){
            vec.at(7)++;
        }
        else if(s.at(i)=='i'){
            vec.at(8)++;
        }
        else if(s.at(i)=='j'){
            vec.at(9)++;
        }
        else if(s.at(i)=='k'){
            vec.at(10)++;
        }
        else if(s.at(i)=='l'){
            vec.at(11)++;
        }
        else if(s.at(i)=='m'){
            vec.at(12)++;
        }
        else if(s.at(i)=='n'){
            vec.at(13)++;
        }
        else if(s.at(i)=='o'){
            vec.at(14)++;
        }
        else if(s.at(i)=='p'){
            vec.at(15)++;
        }
        else if(s.at(i)=='q'){
            vec.at(16)++;
        }
        else if(s.at(i)=='r'){
            vec.at(17)++;
        }
        else if(s.at(i)=='s'){
            vec.at(18)++;
        }
        else if(s.at(i)=='t'){
            vec.at(19)++;
        }
        else if(s.at(i)=='u'){
            vec.at(20)++;
        }
        else if(s.at(i)=='v'){
            vec.at(21)++;
        }
        else if(s.at(i)=='w'){
            vec.at(22)++;
        }
        else if(s.at(i)=='x'){
            vec.at(23)++;
        }
        else if(s.at(i)=='y'){
            vec.at(24)++;
        }
        else if(s.at(i)=='z'){
            vec.at(25)++;
        }
    }
    long long summ=1;
    for(int i=0;i<26;i++){
        summ*=vec.at(i)+1;
        summ%=mod;
    }
    cout<<summ-1<<endl;
}