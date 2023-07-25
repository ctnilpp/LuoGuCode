#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    int sum = 0;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        int now = i;
        while(now>0){
            int check = now%10;
            if(check == x)sum++;
            now/=10;
        }

    }
    cout<<sum<<endl;
    return 0;
}


