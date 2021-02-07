#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N,M;
    cin>>N>>M;
    vector<vector<int>>s(M);
    for(int i=0;i<M;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int a;
            cin>>a;
            s.at(i).push_back(a-1);
        }
    }
    vector<int>p(M);
    for(int i=0;i<M;i++){
        cin>>p.at(i);
    }
    long long res=0;
    for(int bit=0;bit<(1<<N);++bit){
        bool ok =true;
        for(int i=0;i<M;i++){
            int con=0;
            for(auto v:s.at(i)){
                if(bit&(1<<v)){//電気がついてるのと電気iがどんだけ光るか確認
                    ++con;
                }
            }
            if (con % 2 != p.at(i)) ok = false;
        }
        if (ok) ++res;
    }
    cout << res << endl;
}