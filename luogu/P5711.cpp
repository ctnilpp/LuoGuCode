#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result = 0;
    if(n%100==0){
            if(n%400 ==0) result = 1;
    }
    else{
        if(n%4==0)result = 1;
    }
    cout<<result<<endl;
    return 0;
 }


