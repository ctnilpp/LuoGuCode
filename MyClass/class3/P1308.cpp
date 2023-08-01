#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char s1[1000005];
    cin>>s;
    cin.ignore();
    cin.getline(s1, 1000005);
    int idx = 0;
    int num = 0;
    int min_idx = INT_MAX;
    int now = 0;
    bool is_diff = false;
    while(s1[idx]!='\0'){
        if(s1[idx]!=' '){
            if(toupper(s1[idx])== toupper(s[now])){
                now++;
            }
            else is_diff = true;
        }
        else{
            if(now == s.length()&&!is_diff){
                num++;
                min_idx = min(idx - now, min_idx);
            }
            is_diff = false;
            now = 0;
        }
        idx++;
    }
    if(now == s.length()&&!is_diff){
        num++;
        min_idx = min(idx - now, min_idx);
    }
    if(num>0){
        cout<<num<<" "<<min_idx<<endl;
    }
    else cout<<-1;
    return 0;
 }






