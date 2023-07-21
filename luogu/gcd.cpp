#include<bits/stdc++.h>
using namespace std;

 int gcd(int a, int b){
    int yushu = a % b;
    if(yushu == 0)return b;
    if(yushu == b - yushu) return yushu;
    else return gcd(b, yushu);
 }

int main()
{
    cout<<gcd(45, 30)<<endl;
    return 0;
 }



