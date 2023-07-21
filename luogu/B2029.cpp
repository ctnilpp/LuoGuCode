#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, r;
    scanf("%d %d", &h, &r);
    float area = 3.14f * pow(r, 2) * h;
    int num = ceil(20000.0 / area);
    printf("%d", num);
    return 0;
 }


