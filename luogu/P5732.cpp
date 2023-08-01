#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+2][n+2];
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            if(j==i||j==1)a[i][j] =1;
            else{
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j<i)cout<<a[i][j]<<" ";
            else cout<<a[i][j];
        }
        if(i<n)cout<<endl;
    }
    return 0;
 }





