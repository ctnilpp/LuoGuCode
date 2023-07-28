#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[35];
    int b[8];
    int n;
    cin>>n;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    for(int i=0;i<7;i++){
        int now;
        cin>>now;
        a[now]++;
    }
    int result = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int i=0;i<7;i++){
            int now;
            cin>>now;
            if(a[now]>0)sum++;
        }
        b[7 - sum]++;
    }
    for(int i=0;i<7;i++){
        if(i<6)
        cout<<b[i]<<" ";
        else cout<<b[i];
    }
    return 0;
}
