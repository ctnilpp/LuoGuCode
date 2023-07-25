#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    for(int i =0;i<n;i++){
        int now;
        cin>>now;
        max_num = max(max_num, now);
        min_num = min(min_num, now);
    }
    cout<<max_num - min_num;
    return 0;
 }
