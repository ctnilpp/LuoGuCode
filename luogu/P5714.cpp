#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,h;
    scanf("%lf %lf", &m, &h);
    double result = m / pow(h, 2);
    if(result < 18.5f)cout<<"Underweight"<<endl;
    else if(result >= 18.5f && result < 24) cout<<"Normal";
    else {
        cout<<result<<endl;
        cout<<"Overweight"<<endl;
    }
    return 0;
 }


