#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result = INT_MAX;
    for(int i=0;i<n;i++){
        int now;
        cin>>now;
        result = min(result, now);
    }
    cout<<result;
    return 0;
 }





