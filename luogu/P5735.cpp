#include<bits/stdc++.h>
using namespace std;

double calDis(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<fixed<<setprecision(2)<<calDis(x1, y1, x2, y2) + calDis(x2, y2, x3, y3) + calDis(x1, y1, x3, y3);
    return 0;
 }


