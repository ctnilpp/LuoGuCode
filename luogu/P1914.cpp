#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i =0;i<s.length();i++){
        int num = s[i] - 'a';
        num = (num + n)%26;
        cout<<char(num+'a');
    }
    return 0;
}
