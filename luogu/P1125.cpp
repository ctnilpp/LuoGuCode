#include<bits/stdc++.h>
using namespace std;
bool vis[105] = {1, 1};
int num[27] = {};
int main()
{
    for(int i=2;i<=105;i++){
        if(vis[i]==0){
            for(int j=i*i;j<=105;j+=i){
                vis[j] = 1;
            }
        }
    }
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int now = s[i] - 'a';
        num[now]++;
    }
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    for(int i=0;i<26;i++){
        int now = num[i];
        if(now==0)continue;
        max_num = max(max_num, now);
        min_num = min(min_num, now);
    }
    if(vis[max_num - min_num]==0){
        cout<<"Lucky Word"<<endl<<max_num - min_num;
    }
    else{
        cout<<"No Answer"<<endl<<0;
    }
    return 0;
 }


