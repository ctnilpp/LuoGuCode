#include<bits/stdc++.h>
using namespace std;
int a[15];
string result[60000];
int sumcheck = 0;
int cnt = 0;
void DFS(int idx, int sum){
    if(idx>=10){
        if(sum!=sumcheck)return;
        string now;
        for(int i=0;i<10;i++){
            now += (char)(a[i] + '0');
            now += " ";
        }
        result[cnt++] = now;
        return;
    }
    for(int j=1;j<=3;j++){
        a[idx] = j;
        DFS(idx + 1, sum + j);
    }
}

int main()
{
    memset(a, 0, sizeof(a));
    cin>>sumcheck;
    DFS(0, 0);
    if(cnt ==0)cout<<0;
    else {
        cout<<cnt<<endl;
        for(int i=0;i<cnt;i++){
        cout<<result[i]<<endl;
        }
    }
    return 0;
 }





