#include <bits/stdc++.h>
using namespace std;
//今回３＋３を考えていなかったのでしっかりなんとおりあるかは考察しなければならない
int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int count=0;
    if(a==c&&b==d){
        cout<<count<<endl;
        return 0;
    }
    if(a+b==c+d||a-b==c-d||abs(a-c)+abs(b-d)<=3){
        count++;
        cout<<count<<endl;
    }
    else if((a-1)+(b-1)==c+d||(a-2)+(b-2)==c+d||(a+1)+(b+1)==c+d||(a+2)+(b+2)==c+d||(a-1)-(b-1)==c+d||(a-2)-(b-2)==c+d||(a+1)-(b+1)==c+d||(a+2)-(b+2)==c+d||(a-1)+b==c+d||(a-3)+b==c+d||(a+1)+b==c+d||(a+3)+b==c+d||(a-1)-b==c-d||(a-3)-b==c-d||(a+1)-b==c-d||(a+3)-b==c-d||(a+b)%2==(c+d)%2)
    {
        count++;
        count++;
        cout<<count<<endl;
    }
    else{
        cout<<3<<endl;
    }

}
