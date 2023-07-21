#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y, m;
    cin>>y>>m;
    bool is_leap_year = false;
    if(y%100==0){
        if(y%400 == 0)is_leap_year = true;
    }
    else if(y%4 == 0)is_leap_year = true;
    int month[13] = {0, 31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(m!=2)cout<<month[m]<<endl;
    else{
        if(is_leap_year) cout<<29<<endl;
        else cout<<28<<endl;
    }
    return 0;
 }


