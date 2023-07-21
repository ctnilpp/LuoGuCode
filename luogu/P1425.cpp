#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int pre = 60*a+b;
    int next = 60*c+d;
    int diff = next - pre;
    int h = diff / 60;
    int m = diff % 60;
    printf("%d %d", h, m);
    return 0;
 }


