#include<bits/stdc++.h>
using namespace std;
bool a[100005] = {1, 1};
int b[100005];
int main()
{
    //œﬂ–‘…∏
    int cnt = 0;
    int now = 0;
    for(int i=2;i<=100000;i++){
        if(a[i]==0){
            b[cnt] = i;
            cnt++;
        }
        for(int j=0;j<cnt&&b[j] * i<=100000;j++){
            now = b[j];
            a[i * now] = 1;
            if(i % now ==0)break;
        }
    }

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int now;
        cin>>now;
        if(a[now]==0){
            cout<<now;
            if(i<n-1)cout<<" ";
        }
    }
    return 0;
 }


