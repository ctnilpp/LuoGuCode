#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        if(num==1){
            string addStr;
            cin>>addStr;
            s+=addStr;
            cout<<s<<endl;
        }
        else if(num==2){
            int a,b;
            cin>>a>>b;
            s = s.substr(a, b);
            cout<<s<<endl;
        }
        else if(num==3){
            int now;
            string inserts;
            cin>>now>>inserts;
            s.insert(now, inserts);
            cout<<s<<endl;
        }
        else{
            string finds;
            cin>>finds;
            int now = s.find(finds);
            if(s.length()<now){
                cout<<-1<<endl;
            }
            else cout<<now<<endl;
        }
    }
    return 0;
 }






