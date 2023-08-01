#include<bits/stdc++.h>
using namespace std;
bool vis[2000][2000];

void change(int x, int y, int length){
    if(length == 1)return;
    int nextLength = length / 2;
    for(int i=x;i<x+nextLength;i++){
        for(int j=y;j<y+nextLength;j++){
            vis[i][j] = 0;
        }
    }
    change(x, y, nextLength);
    change(x+nextLength, y, nextLength);
    change(x, y+nextLength, nextLength);
    change(x+nextLength, y+nextLength, nextLength);
}

int main()
{
    int n;
    cin>>n;
    memset(vis, 1, sizeof(vis));
    int length = pow(2, n);
    change(0, 0, length);
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout<<vis[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
 }


