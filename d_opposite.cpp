#include <bits/stdc++.h>
using namespace std;
int main(){
  static const double pi = 3.141592653589793;
    int N;
    double a,b;
    double c,d;
    cin>>N>>a>>b>>c>>d;
    double t=cos(2*pi/(N));
    double  s=sin(2*pi/(N));
    double  xc=((c+a)/2);
    double  yc=((b+d)/2);   
    double aaa=(a-xc)*t-(b-yc)*s;
    double bbb=(a-xc)*s+(b-yc)*t;
    cout<< fixed <<setprecision(10)<<aaa+xc<<" "<<bbb+yc<<endl;
}