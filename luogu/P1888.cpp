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
    int a,b,c;
    cin>>a>>b>>c;
    int max_num = max(max(a,b),max(b,c));
    int min_num = min(min(a,b),min(b,c));
    int yueshu = gcd(max_num, min_num);
    cout<<min_num/yueshu<<"/"<<max_num/yueshu<<endl;
    return 0;
 }



