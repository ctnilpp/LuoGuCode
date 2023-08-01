#include <bits/stdc++.h>
using namespace std;
int main(){
    int i =1;
    int j =4;
    int a[5];
    for(int i=0;i<5;i++){
        a[i] = i;
    }
    i = 1;
    cout<<a[++i]<<endl;
    i=1;
    cout<<a[i++]<<endl;
    j=4;
    cout<<a[j--]<<endl;
    j=4;
    cout<<a[--j]<<endl;
    return 0;
}

