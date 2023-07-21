#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = 0.5*(a+b+c);
    double result = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf\n", result);
    return 0;
 }


