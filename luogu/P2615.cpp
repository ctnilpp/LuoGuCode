#include<bits/stdc++.h>
using namespace std;
int a[40][40];
int main()
{
    int n;
    cin>>n;
    memset(a, 0, sizeof(a));
    int mid = n / 2 + 1;
    int sum = 1;
    a[1][mid] = sum;
    int i = 1;
    int j = mid;
    sum++;
    int max_num = n*n;
    while(sum<=max_num){
        if(i == 1&&j!= n){
            a[n][j+1] = sum;
            i = n;
            j++;
        }
        else if(j==n&&i!=1){
            a[i - 1][1] = sum;
            i--;
            j = 1;
        }
        else if(i == 1 && j == n){
            a[i+1][j] = sum;
            i++;
        }
        else{
            if(a[i - 1][j + 1] == 0){
                a[i - 1][j + 1] = sum;
                i--;
                j++;
            }
            else{
                a[i+1][j] = sum;
                i++;
            }
        }
        sum++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<n)
            cout<<a[i][j]<<" ";
            else cout<<a[i][j];
        }
        if(i<n)cout<<endl;
    }
    return 0;
 }





