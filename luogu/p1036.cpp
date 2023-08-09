#include<bits/stdc++.h>
using namespace std;
int nums[10];
int n;
int cnt = 0;
int getnums[10];
int kk = 0;
int result = 0;

bool isprime(int x){
    if(x == 1 || x == 0) return false;
    else{
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0)return false;
        }
    }
    return true;
}

void DFS(int idx, int k, int sum){
    if(k == 0||idx>=n){
        if(k==0){
            if(isprime(sum)){
                result++;
            }
        }
        return;
    }
    DFS(idx + 1, k - 1, sum + nums[idx]);
    DFS(idx + 1, k, sum);
}

int main()
{
    memset(nums, 0, sizeof(nums));
    cin>>n;
    cin>>kk;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    DFS(0, kk, 0);
    cout<<result;
    return 0;
 }






