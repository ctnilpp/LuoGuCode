#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"-";
        n = -n;
    }
    if(n==0)cout<<0;
    else{
        int set_zero = 0;
        while(n>0){
        if(n%10!=0||set_zero){
            set_zero = 1;
            cout<<n%10;
        }
        n/=10;
        }
    }
    return 0;
}
