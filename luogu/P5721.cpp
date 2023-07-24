#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 1;
    for(int i=n;i>=1;i--){
        for(int j =0;j<i;j++){
            if(sum<10)cout<<"0";
            cout<<sum;
            sum++;
        }
        cout<<endl;
    }
    return 0;
}

