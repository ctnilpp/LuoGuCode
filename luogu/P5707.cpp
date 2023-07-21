#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s, v;
    scanf("%f %f", &s, &v);
    float t = s/v;
    t = ceil(t);
    int use_time = (int)t + 10;
    int h = use_time / 60;
    int m = use_time % 60;
    int now_m = 0;
    if(m>0){
        h++;
        now_m = 60 - m;
    }
    int now_h = 32 - h;
    if(now_h > 23){
        now_h = now_h - 24;
        printf("0%d:", now_h);
    }
    else printf("%d:", now_h);

    if(now_m>=0&&now_m<10)printf("0%d", now_m);
    else printf("%d", now_m);
    return 0;
 }



