#include <bits/stdc++.h>
#define N 100000
using namespace std;
int prime[N];
int main(){
    int n;
    cin>>n;
    prime[0] = 1;
    prime[1] = 1;
    int cnt = 0;
    int sum = 0;
    int num = 0;
    memset(prime, 0, sizeof(prime));
    for(int i =2;i<=N;i++){
        if(!prime[i]){
            sum += i;
            if(sum>n)break;
            num++;
            cout<<i<<endl;
        }
        for(int j=i*i;j<=N;j+=i){
            prime[j] = 1;
        }
    }
    cout<<num;
    return 0;
}
