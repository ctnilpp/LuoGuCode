#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int b_num = 0;
    int g_num = 0;
    for(int i=0;i<len;){
        if(i+2<len&&s[i]=='b'&&s[i+1]=='o'&&s[i+2]=='y'){
            i+=3;
            b_num++;
        }
        else if(i+1<len&&((s[i]=='b'&&s[i+1]=='o')||(s[i]=='o'&&s[i+1]=='y'))){
            i+=2;
            b_num++;
        }
        else if(s[i]=='b'||s[i]=='o'||s[i]=='y'){
            i++;
            b_num++;
        }
        else if(i+3<len&&(s[i]=='g'&&s[i+1]=='i'&&s[i+2]=='r'&&s[i+3]=='l')){
            i+=4;
            g_num++;
        }
        else if(i+2<len&&((s[i]=='g'&&s[i+1]=='i'&&s[i+2]=='r')||(s[i]=='i'&&s[i+1]=='r'&&s[i+2]=='l'))){
            i+=3;
            g_num++;
        }
        else if(i+1<len&&((s[i]=='g'&&s[i+1]=='i')|| (s[i]=='i'&&s[i+1]=='r') || (s[i]=='r'&&s[i+1]=='l') )){
            i+=2;
            g_num++;
        }
        else if(s[i]=='g'||s[i]=='i'||s[i]=='r'||s[i]=='l'){
            i++;
            g_num++;
        }
        else i++;
    }
    cout<<b_num<<endl;
    cout<<g_num;
    return 0;
 }






