#include <bits/stdc++.h>
using namespace std;
int a[100000005];
int main(){
    int n;
    cin>>n;
    int sum = 0;
    a[sum++] = n;
    while(n!=1){
        if(n%2==1){
            n = n*3+1;
        }
        else{
            n/=2;
        }
        a[sum++] = n;
    }
    for(int i=sum-1;i>=0;i--){
        if(i>0)
        cout<<a[i]<<" ";
        else cout<<a[i];
    }
    return 0;
}
