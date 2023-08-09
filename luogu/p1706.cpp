#include<bits/stdc++.h>
using namespace std;
bool vis[10];
int nums[10];
int n;
int cnt = 0;

void DFS(int idx){
    if(idx>=n){
        for(int i=0;i<n;i++){
            cout<<"    "<<nums[i];
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            vis[i] = 1;
            nums[idx] = i;
            DFS(idx + 1);
            vis[i] = 0;
        }
    }

}

int main()
{
    memset(vis, 0, sizeof(vis));
    memset(nums, 0, sizeof(nums));
    cin>>n;
    DFS(0);
    return 0;
 }






