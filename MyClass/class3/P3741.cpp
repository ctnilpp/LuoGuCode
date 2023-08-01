#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum = 0;
    for(int i=0;i<n;){
        if(i+1>=n)break;
        if(s[i]=='V'&&s[i+1]=='K'){
            i+=2;
            sum++;
        }
        else{
            i++;
        }
    }
    int now_sum;
    for(int j=0;j<n;j++){
        if(s[j]=='V')s[j] = 'K';
        else s[j] = 'V';
        now_sum = 0;
        for(int i=0;i<n;){
            if(i+1>=n)break;
            if(s[i]=='V'&&s[i+1]=='K'){
                i+=2;
                now_sum++;
            }
            else{
                i++;
            }
        }
        sum = max(now_sum, sum);
        if(s[j]=='V')s[j] = 'K';
        else s[j] = 'V';
    }
    cout<<sum;
    return 0;
 }






