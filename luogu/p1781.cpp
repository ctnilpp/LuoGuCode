#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string max_s = "0";
    string now;
    int idx = 0;
    for(int i=0;i<n;i++){
        cin>>now;
        if(now.length()>max_s.length()){
            max_s = now;
            idx = i + 1;
        }
        else if(now.length()==max_s.length()){
            if(now>max_s){
                    idx = i + 1;
                    max_s = now;
            }
        }
    }
    cout<<idx<<endl<<max_s;
    return 0;
 }





