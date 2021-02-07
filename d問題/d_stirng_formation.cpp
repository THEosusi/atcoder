#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;//末尾用配列
    cin >> s;
    deque<char> q;//先頭用配列
    for(int c : s ) q.push_back(c);
    int times;
    cin >> times;
    bool flip=false;
    for(int i=0; i<times; i++){
        int t_type;
        cin >> t_type;
        if(t_type==1){ // t_type=1なら前後反転
            flip=!flip;
        }else{ // t_type=2なら
            int f_type; // f_type
            char c;
            cin >> f_type >> c;
            if(flip){
                if(f_type==1){
                    f_type = 2;
                }else if(f_type==2){
                    f_type = 1;
                }
            }
            if(f_type==1){ //f_type=1なら先頭に+c
                q.push_front(c);
            }else{ //f_type=2ならsの末尾に+c，末尾用配列sに格納
                q.push_back(c);
            }
        }
    }
    if(flip) reverse(q.begin(),q.end());//backは反対から読むので
    string ans; //出力用に
    for(char c : q ) ans +=c;
    cout << ans << endl;
    return 0;
}
