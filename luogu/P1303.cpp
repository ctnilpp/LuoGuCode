#include <iostream>
using namespace std;
int main(){
    int a[4005];
    int b[4005];
    int c[4005];
    string a1;
    string b1;
    cin>>a1;
    cin>>b1;
    int max_len = a1.length() + b1.length() - 1;
    for(int i=a1.length()-1,j=0;i>=0;i--,j++){
        a[j] = a1[i] - '0';
    }
    for(int i=b1.length()-1,j=0;i>=0;i--,j++){
        b[j] = b1[i] - '0';
    }
    for(int i=0;i<=max_len;i++){
        c[i] = 0;
    }
    for(int i = 0;i<a1.length();i++){
        for(int j =0;j<b1.length();j++){
            c[i + j] += a[i] * b[j];
        }
    }
    for(int i =0;i<max_len;i++){
        c[i+1] += c[i]/10;
        c[i]%=10;
    }
    for(;!c[max_len]&&max_len>0;max_len--){
    }
    for(int i=max_len;i>=0;i--){
        cout<<c[i];
    }
    return 0;
}
