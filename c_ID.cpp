#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin>>N>>M;
    vector<tuple<int,int,int>>vec;
    vector<string>vec1(M,"");
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        vec.push_back(make_tuple(a,b,i));
    }
    sort(vec.begin(),vec.end());
    int count=1;
    int AAA=0;
    for(int i=0;i<M;i++){
        if(AAA !=get <0>(vec.at(i))){
            count=1;
            AAA=get<0>(vec.at(i));
        }
        string a="";
        string b="";
        string c="";
        a +=to_string(get<0>(vec.at(i)));
        b +=to_string(count);
        for(int i=0;i<6-a.size();i++){
            c+='0';
        }
        c+=a;
        for(int i=0;i<6-b.size();i++){
            c+='0';
        }
        c+=b;
        count++;
        vec1.at(get<2>(vec.at(i))) +=c;
    }
    for(int i=0;i<M;i++){
        cout<<vec1.at(i)<<endl;
    }
}