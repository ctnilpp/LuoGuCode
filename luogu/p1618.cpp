#include<bits/stdc++.h>
using namespace std;
bool vis[10];
int nums[3];
int a,b,c;
int record[10];
int cord_cnt = 0;
bool is_can = false;

void clearVis(){
    for(int i=0;i<cord_cnt;i++){
        vis[record[i]] = 0;
    }
}

void DFS(int idx){
    if(idx>=3){
        int num1 = 0;
        int weishu = 1;
        for(int i = 2;i>=0;i--){
            num1+=nums[i]*weishu;
            weishu*=10;
        }
        int num2 = num1 * b / a;
        if(num2<100||num2>999)return;
        cord_cnt = 0;
        int checknum2 = num2;
        while(checknum2>0){
            int now = checknum2 % 10;
            checknum2 /=10;
            if(now==0||vis[now]){
                    clearVis();
                    return;
            }
            else {
                vis[now] = 1;
                record[cord_cnt++] = now;
            }
        }
        int num3 = num1 * c / a;
        if(num3<100||num3>999)return;
        int checknum3 = num3;
        while(checknum3>0){
            int now = checknum3 % 10;
            checknum3 /=10;
            if(now==0||vis[now]){
                    clearVis();
                    return;
            }
            else {
                vis[now] = 1;
                record[cord_cnt++] = now;
            }
        }
        is_can = true;
        cout<<num1<<" "<<num2<<" "<<num3<<endl;
        clearVis();
        return;
    }
    for(int i=1;i<=9;i++){
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
    cin>>a>>b>>c;
    if(a==0){
        cout<<"No!!!";
        return 0;
    }
    DFS(0);
    if(!is_can)cout<<"No!!!";
    return 0;
 }






