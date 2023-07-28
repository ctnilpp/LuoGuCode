#include <bits/stdc++.h>
#define N 1000000000
using namespace std;
bool prime[N];
int a[12];
bool is_reverse(int n)
{
    int num = 0;
    int now = n;
    while(now>0){
        a[num++] = now%10;
        now/=10;
    }
    for(int i=0,j=num-1;i<j;i++,j--){
        if(a[i] != a[j])return false;
    }
    return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    prime[0] = 1;
    prime[1] = 1;
    int cnt = 0;
    int sum = 0;
    int num = 0;
    memset(prime, 0, sizeof(prime));
    for(int i =2;i<=b;i++){
        if(!prime[i]){
            if(is_reverse(i)&&i>=a)cout<<i<<endl;
        }
        for(int j=i*i;j<=b;j+=i){
            prime[j] = 1;
        }
    }
    return 0;
}
