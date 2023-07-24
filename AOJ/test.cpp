#include <bits/stdc++.h>
using namespace std;
int main(){
    double h,r;
    double pi = 3.14;
    cin>>h>>r;
    double v = pi * r * r * h;
    cout<<ceil(20000/v)<<endl;
    return 0;
}
