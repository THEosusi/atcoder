#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    vector<long long>vec(N);
        long long minn=20000000000000;
    for(int i=0;i<N;i++){
        cin>>vec.at(i);
    }
    if(N==1){
        cout<<vec.at(0)<<endl;
        return 0;
    }
    for (int bit = 0; bit < (1<<N-1); ++bit)
    {
        /* bit で表される集合の処理を書く */
        /* きちんとできていることを確認してみる */
        // bit の表す集合を求める
        vector<int> S;
        for (int i = 0; i < N-1; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(i);
            }
        }
        long long a=0;
        vector<long long>kotae;
        int aaa=0;
        for(int i=0;i<S.size();i++){
            for(int j=aaa;j<=S.at(i);j++){
                if(j==S.at(i)){
                    a|=vec.at(j);
                    kotae.push_back(a);
                    a=0;
                    aaa=S.at(i)+1;
                }
                else{
                    a|=vec.at(j);
                }
            }
        }
        for(int i=aaa;i<N;i++){
            a=a|vec.at(i);
        }
        kotae.push_back(a);
        long long aaaa=0;
        for(int i=0;i<kotae.size();i++){
            aaaa^=kotae.at(i);
        }
        minn=min(aaaa,minn);
    }
    cout<<minn<<endl;
}
