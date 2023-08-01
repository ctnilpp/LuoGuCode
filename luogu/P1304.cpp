#include<bits/stdc++.h>
using namespace std;
bool a[10005] = {1, 1};
int prime[10005];
int main()
{
    int cnt = 0;
    for(int i=2;i<=10000;i++){
        if(a[i]==0){
            prime[cnt++] = i;
        }
        for(int j=0;j<cnt&&prime[j] * i <=10000;j++){
            int now = prime[j] * i;
            a[now] = 1;
            if(i%now==0)break;
        }
    }
    int n;
    cin>>n;
    for(int i=4;i<=n;i+=2){
        for(int j=0;j<cnt;j++){
            int rest = i - prime[j];
            if(a[rest]==0){
                cout<<i<<"="<<prime[j]<<"+"<<rest<<endl;
                break;
            }
            if(rest<=1)break;
        }
    }
    return 0;
 }


