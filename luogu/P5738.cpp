#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int max_num;
    int min_num;
    double sum;
    double result = 0;
    for(int i=0;i<n;i++){
        max_num = INT_MIN;
        min_num = INT_MAX;
        sum = 0;
        for(int j=0;j<m;j++){
            int now;
            cin>>now;
            max_num = max(max_num, now);
            min_num = min(min_num, now);
            sum+=now;
        }
        sum-=max_num;
        sum-=min_num;
        sum = sum/(m-2);
        result = max(result, sum);
    }
    cout<<fixed<<setprecision(2)<<result;
    return 0;
 }


