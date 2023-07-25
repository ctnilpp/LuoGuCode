#include <iostream>
using namespace std;

void addVal(int a[], int b[], int c[], int a_len, int b_len)
{
    int max_len = max(a_len, b_len);
    c[0] = 0;
    for(int i=0;i<max_len;i++){
        c[i] += a[i]+b[i];
        c[i+1] = c[i]/10;
        c[i] %=10;
    }
}

int main(){
    int a[505];
    int b[505];
    int c[505];
    string a1;
    string b1;
    cin>>a1;
    cin>>b1;
    int max_idx = max(a1.length(), b1.length());
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
    addVal(a, b, c, a1.length(), b1.length());
    if(c[max_idx]){
        max_idx++;
    }
    for(int i=max_idx - 1;i >=0;i--){
        cout<<c[i];
    }

    return 0;
}
