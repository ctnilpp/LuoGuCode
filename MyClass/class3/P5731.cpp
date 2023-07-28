#include<bits/stdc++.h>
using namespace std;
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int main()
{
    int n;
    cin>>n;
    int a[n+2][n+2];
    int i = 1;
    int j = 0;
    int nowdir = 0;
    int step = n;
    int sum = 1;
    int change = 0;
    while(step > 0){
        int now = step;
        while(now >0){
            i += dir[nowdir][0];
            j += dir[nowdir][1];
            a[i][j] = sum;
            sum++;
            now--;
        }
        nowdir = (nowdir + 1)%4;
        if(change % 2==0)step--;
        change++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                int now = a[i][j];
                if(now<10){
                    cout<<"  "<<now;
                }
                else cout<<" "<<now;

        }
        if(i<n)cout<<endl;
    }
    return 0;
 }
