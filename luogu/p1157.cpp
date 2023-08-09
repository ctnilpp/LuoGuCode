#include<bits/stdc++.h>
using namespace std;
int n;
int cnt = 0;
int getnums[25];
int kk = 0;
int result = 0;

void DFS(int idx, int k){
    if(k == 0||idx>n){
        if(k==0){
            for(int i=0;i<cnt;i++){
                int now = getnums[i];
                cout<<" ";
                if(now<10)cout<<" ";
                cout<<getnums[i];
            }
            cout<<endl;
        }
        return;
    }
    getnums[cnt++] = idx;
    DFS(idx + 1, k - 1);
    getnums[cnt--] = 0;
    DFS(idx + 1, k);
}

int main()
{
    cin>>n;
    cin>>kk;
    DFS(1, kk);
    return 0;
 }






