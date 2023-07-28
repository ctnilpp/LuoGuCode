#include<bits/stdc++.h>
using namespace std;
#define MAX_NUM 2000000
bool b[MAX_NUM];
int main()
{
    int n;
    cin>>n;
    memset(b, 0, sizeof(b));
    for(int i=0;i<n;i++){
        double a;
        int t;
        cin>>a>>t;
        for(int j=1;j<=t;j++){
            int now = a*j;
            if(now<=MAX_NUM)
            b[now] = !b[now];
        }
    }
    for(int i=1;i<=MAX_NUM;i++){
        if(b[i]==1){
            cout<<i;
            break;
        }
    }
    return 0;
 }
