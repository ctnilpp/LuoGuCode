#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[11];
    int result = 0;
    for(int i =0;i<10;i++){
        cin>>a[i];
    }
    int now_hight;
    cin>>now_hight;
    for(int i =0;i<10;i++){
        if(now_hight + 30 >= a[i])result++;
    }
    cout<<result<<endl;
    return 0;
 }



