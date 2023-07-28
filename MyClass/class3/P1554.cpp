#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[12];
    memset(a, 0, sizeof(a));
    for(int i=m;i<=n;i++){
        int now = i;
        while(now>0){
            int pre = now/10;
            int yushu = now%10;
            now/=10;
            a[yushu]++;
        }
    }
    for(int i=0;i<10;i++){
        if(i<9)cout<<a[i]<<" ";
        else cout<<a[i];
    }
    return 0;
 }
