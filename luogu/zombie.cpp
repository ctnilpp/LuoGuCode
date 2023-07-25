#include <bits/stdc++.h>
using namespace std;
char a[10005];
string now;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>now;
        int length = 0;
        for(int q=0;q<now.length();q++){
            if(now[q] == '#'&&length>0){
                length--;
            }
            else if(now[q] == '@'){
                length = 0;
            }
            else{
                a[length]=now[q];
                length++;
            }
        }
        for(int j=0;j<length;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
    return 0;
}


