#include<bits/stdc++.h>
using namespace std;
int a[35];
int main()
{
    long long n;
    int now;
    int sum = 0;
    int cnt = 0;
    while(scanf("%d", &now)!=EOF){
        sum+=now;
        cnt++;
    }
    n = sum * pow(2, cnt - 1);
    cout<<n;
    return 0;
 }


