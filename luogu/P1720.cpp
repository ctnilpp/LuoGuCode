#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sqrt5 = sqrt(5);
    cout<<fixed<<setprecision(2)<<(pow((1.0 +sqrt5)/2, n) - pow((1.0 - sqrt5)/2, n)) / sqrt5;
    return 0;
 }


