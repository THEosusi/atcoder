#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    string S;
    cin>>N>>S;
    int count=0;
    for(int i=0;i<1000;i++){
        vector<int>vec={i/100,(i / 10) % 10, i % 10};
        int f=0;
		for (int j = 0; j < N; j++) {
			if (S.at(j) == ('0' + vec.at(f))) f++;
			if (f == 3) break;
		}
        if(f==3){
            count++;
        }
    }
    cout<<count<<endl;

}