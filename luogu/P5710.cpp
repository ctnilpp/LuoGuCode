#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int result = 0;
    if(x%2==0)result++;
    if(x>4&&x<=12)result++;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    if(result == 2){
        a = 1;
    }
    if(result>=1){
        b= 1;
    }
    if(result==1){
        c = 1;
    }
    if(result== 0){
        d = 1;
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    return 0;
 }

