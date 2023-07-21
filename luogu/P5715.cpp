#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int temp;
    if(a>b){temp = b;b=a;a=temp;}
    if(a>c){temp = c;c=a;a=temp;}
    if(b>c){temp = b;b=c;c=temp;}
    printf("%d %d %d", a, b, c);
    return 0;
 }


