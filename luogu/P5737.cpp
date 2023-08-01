#include<bits/stdc++.h>
using namespace std;
int num[3005];
bool isYear(int n){
    if(((n%100==0)&&n%400==0)||(n%4==0&&n%100!=0))return true;
    return false;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int cnt = 0;
    for(int i=a;i<=b;i++){
        if(isYear(i))num[cnt++] = i;
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
        cout<<num[i];
        if(i<cnt-1)cout<<" ";
    }
    return 0;
 }


