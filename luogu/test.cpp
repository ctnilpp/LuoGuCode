#include <bits/stdc++.h>
using namespace std;
long long n,m;
bool vis[10000001]={1,1};//0��1���Ȳ���������Ҳ���Ǻ����������ȱ��Ϊ����
int Prime[10000001],k;
void prime(long long n)
{
    for(int i=2;i<=n;i++)//��С��������2
    {
        if(!vis[i])
        {
            Prime[++k]=i;//����������ͱ��һ��
         }
        for(int j=1;j<=k;j++)//jС�ڵ�ǰ���е������ĸ���
        {
            if(Prime[j]*i>n)
            {
                break;
            }
            vis[Prime[j]*i]=true;//���������Ρ�i��������Ϊ����
            if(i%Prime[j]==0)
            {
                break;
            }
        }
    }//ŷ��ɸ���������õ�ǰ������֮ǰ��ɸ�������������������Ϊ����
}
int main()
{
    cin>>n;
    prime(100001);//��10��5�η���Χ��ɸ����
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(!vis[t])//�����ǹ��ˣ���ʱ�����ֱ���жϾ�����
        {
            cout<<t<<" ";
        }
    }
    return 0;
}
