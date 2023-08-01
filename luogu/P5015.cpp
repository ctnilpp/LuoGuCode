#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[10];
    cin.getline(a, 10);
    int sum = 0;
    for(int i=0;i<10;i++){
        if(a[i]==' ')continue;
        if(a[i]=='\0')break;
        sum++;
    }
    cout<<sum;
    return 0;
}
