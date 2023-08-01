#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char a[30] = {};
    int a_l = 0;
    char b[30] = {};
    int b_l = 0;
    char fuhao = ' ';
    bool is_a = true;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            if(is_a)a[a_l++] = s[i];
            else b[b_l++] = s[i];
        }
        else{
            fuhao = s[i];
            is_a = !is_a;
        }
    }
    return 0;
 }






