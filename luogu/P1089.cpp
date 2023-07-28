#include <bits/stdc++.h>
using namespace std;
int main(){
    int now = 0;
    int cun = 0;
    bool is_can = true;
    for(int i =1;i<=12;i++){
        now+=300;
        int use;
        cin>>use;
        int rest = now - use;
        if(rest<0){
            is_can = false;
            cout<<"-"<<i;
            break;
        }
        cun += (rest/100) * 100;
        now = rest % 100;
    }
    if(is_can){
        cout<< cun*1.2f + now;
    }
    return 0;
}
