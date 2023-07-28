#include <bits/stdc++.h>
using namespace std;
int main(){
    int l,m;
    cin>>l>>m;
    int d[10005];
    memset(d, 0, sizeof(d));
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            d[j] = 1;
        }
    }
    int sum = 0;
    for(int i=0;i<=l;i++){
        if(d[i]==0)sum++;
    }
    cout<<sum;
    return 0;
}
