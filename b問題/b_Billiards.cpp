#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double A ,B,C,D;
    cin >>A>>B>>C>>D;
    double E=(-B*(C-A))/(-D-B)+A;
    cout<< fixed << setprecision(7)<<E<<endl;
}