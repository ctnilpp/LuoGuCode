#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,t,s;
    cin>>m>>t>>s;
    int result;
    if(t == 0)
    {
        result = 0;
    }
    else
    {
        int eat_num = ceil(s/t);
        int remain_num = m - eat_num;
        remain_num = remain_num < 0?0:remain_num;
        result = remain_num;
    }
    cout<<result<<endl;
    return 0;
 }

