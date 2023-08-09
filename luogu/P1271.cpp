#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    memset(a, 0, sizeof(a));
    int n,m;
    cin>>n>>m;
    int last = -1;
    for(int i=0;i<m;i++){
        int now;
        cin>>now;
        a[now]++;
        last = max(now, last);
    }


    for(int i=1;i<=n;i++){
        while(a[i]>0){
            cout<<i;
            a[i]--;
            if(i==last&&a[i]<=0)continue;
            cout<<" ";
        }
    }
    return 0;
 }





