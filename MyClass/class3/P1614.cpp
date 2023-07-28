#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int now = n - 1;
    int sum = INT_MAX;
    while(now - m + 1 >=0){
        int check = 0;
        for(int j=now;j>=now-m+1;j--){
            check += a[j];
        }
        sum = min(sum, check);
        now--;
    }
    cout<<sum;
    return 0;
 }
