#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a;
    cin>>a;
    int temp = (int)a;
    int hundreds = temp/100;
    int tens = temp%100/10;
    int ones = temp%10;
    int little_one = (i)(a*10)%10;
    cout<<little_one<<"."<<ones<<tens<<hundreds<<endl;
    return 0;
 }

