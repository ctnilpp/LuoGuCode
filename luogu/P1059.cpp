#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    //Õý·½ÐÎ
    int len = 1;
    long long zheng = 0;
    long long chang = 0;
    while(len<=n&&len<=m){
        zheng += (n+1-len)*(m+1-len);
        len++;
    }
    int x = 1;
    int y = 2;
    while(x<=n&&y<=m){
        int ny = y;
        while(ny<=m){
            chang += (n+1-x)*(m+1-ny);
            ny++;
        }
        x++;
        y++;
    }
    x = 2;
    y = 1;
     while(x<=n&&y<=m){
        int nx = x;
        while(nx<=n){
            chang += (n+1-nx)*(m+1-y);
            nx++;
        }
        x++;
        y++;
    }
    cout<<zheng<<" ";
    cout<<chang;
    return 0;
 }





