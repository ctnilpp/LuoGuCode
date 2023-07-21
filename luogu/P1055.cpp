#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int beishu = 1;
    int sum = 0;
    for(int i=0;i<s.length();i++){
        char now = s[i];
        if(now == '-')continue;
        else{
            int now_val = now - '0';
            sum+=now_val * beishu;
            beishu++;
        }
        if(beishu ==10)break;
    }
    char result;
    int num = sum%11;
    if(num==10)result = 'X';
    else result = num + '0';
    if(result == s[s.length()-1])cout<<"Right";
    else {
        s[s.length()-1] = result;
        cout<<s;
    }
    return 0;
 }




