#include <bits/stdc++.h>
using namespace std;
long long n,m;
bool vis[10000001]={1,1};//0，1均既不是素数，也不是和数，所以先标记为不是
int Prime[10000001],k;
void prime(long long n)
{
    for(int i=2;i<=n;i++)//最小的素数是2
    {
        if(!vis[i])
        {
            Prime[++k]=i;//如果是素数就标记一下
         }
        for(int j=1;j<=k;j++)//j小于当前所有的素数的个数
        {
            if(Prime[j]*i>n)
            {
                break;
            }
            vis[Prime[j]*i]=true;//用素数依次×i，结果标记为合数
            if(i%Prime[j]==0)
            {
                break;
            }
        }
    }//欧拉筛法，就是拿当前的数×之前的筛出来的素数，这个数即为合数
}
int main()
{
    cin>>n;
    prime(100001);//在10的5次方范围内筛素数
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(!vis[t])//上面标记过了，这时输入后直接判断就行了
        {
            cout<<t<<" ";
        }
    }
    return 0;
}
