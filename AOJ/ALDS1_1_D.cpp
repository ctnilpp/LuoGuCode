#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max_val = -2000000000;
    int min_val;
    cin>>min_val;
    int now_val;
    for(int i = 1;i<n;i++)
    {
        cin>>now_val;
        max_val = max(now_val - min_val, max_val);
        min_val = min(now_val, min_val);
    }
    cout<<max_val<<endl;
    return 0;
}
