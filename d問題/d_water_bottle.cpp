#include <bits/stdc++.h>
using namespace std;
const double PI=3.14159265358979323846;
 
int main() {

    double a,b,x;
    cin>>a>>b>>x;
    double c=x/a/b*2;
    double d=b-((2*x)/(a*a)-b);   
    if(c>=a){
        cout<< fixed << setprecision(10)<<90-(atan(a/d)/PI*180)<<endl;
    }
    else{
    cout<< fixed << setprecision(10)<<90-(atan(c/b)/PI*180)<<endl;
    }
}