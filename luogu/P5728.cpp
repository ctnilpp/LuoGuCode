#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1005][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5&&
               abs((a[i][0]+a[i][1]+a[i][2])-(a[j][0]+a[j][1]+a[j][2]))<=10){
                    sum++;
               }
        }
    }
    cout<<sum;
    return 0;
}
