#include <iostream>
using namespace std;
int main(){
    int a[505];
    int b[505];
    int c[505];
    string a1;
    string b1;
    cin>>a1;
    cin>>b1;
    int max_idx =a1.length() + b1.length();
    for(int i=a1.length()-1,j=0;i>=0;i--,j++){
        a[j] = a1[i] - '0';
    }
    for(int i=b1.length()-1,j=0;i>=0;i--,j++){
        b[j] = b1[i] - '0';
    }
    //注意要填充垃圾数据
    for(int i=a1.length();i<max_idx;i++){
        a[i] = 0;
    }
    for(int i=b1.length();i<max_idx;i++){
        b[i] = 0;
    }
    for(int i=0;i<=max_idx + 1;i++){
        c[i] = 0;
    }
    for(int i=0;i < a1.length();i++){
        for(int j=0;j < b1.length();j++){
            c[i + j] += a[i]*b[i];
        }
    }
    c[1] = c[0] / 10;
    c[0] = c[0] %10;
    for(int i=1;i < max_idx;i++){
            c[i + 1] = c[i] / 10;
            c[i] %= 10;
    }

    int sum = max_idx + 1;
    for(;!c[sum]; sum--){}
    for(int i=sum;i >=0;i--){
            cout<<c[i];
    }
    return 0;
}
