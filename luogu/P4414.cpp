#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max_num = max(max(a,b),max(b,c));
    int min_num = min(min(a,b),min(b,c));
    int mid_num = a+b+c - max_num - min_num;
    string s;
    cin>>s;
    for(int i =0;i<s.length();i++){
        if(s[i]=='A'){
            cout<<min_num;
        }
        else if(s[i]=='B')cout<<mid_num;
        else cout<<max_num;
        if(i+1!=s.length())cout<<" ";
    }
    return 0;
 }




