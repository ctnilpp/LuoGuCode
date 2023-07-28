#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
        b[i] = 0;
        for(int j = 0;j<i;j++){
            if(a[j]<a[i])b[i]++;
        }
    }
    for(int j = 0;j<n;j++){
        if(j<n-1)
        cout<<b[j]<<" ";
        else cout<<b[j];
    }
    return 0;
}
