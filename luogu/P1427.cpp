#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int a[105];
    int sum = 0;
    while(cin>>k){
        if(k==0)break;
        a[sum++] = k;
    }
    for(int i=sum-1;i>=0;i--){
            if(i>=0)
        cout<<a[i]<<" ";
    else cout<<a[i];
    }
    return 0;
}
