  #include <bits/stdc++.h>
using namespace std;
 
struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};


int main() {
    int N,M;
    cin>>N>>M;
    vector<pair<int,int>>vec(M);
    int a,b;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        --a;
        --b;
        vec.at(i).first=a;
        vec.at(i).second=b;
    }
    long long res=0;
    UnionFind uf(N);
    for(int i=0;i<M;i++){
        uf.init(N);
    for(int j=0;j<M;j++){
        if(j==i)continue;
        uf.merge(vec.at(j).first,vec.at(j).second);
    }
    if(uf.size(0)<N)res++;
}
cout<<res<<endl;

}