#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,x,h;
    int a[25][25][25];
    int q;
    cin>>w>>x>>h;
    cin>>q;
    for(int q=1;q<=w;q++){
        for(int w=1;w<=x;w++){
            for(int e=1;e<=h;e++){
                a[q][w][e] = 0;
            }
        }
    }
    for(int i=0;i<q;i++){
        int fx,fy,fz,hx,hy,hz;
        cin>>fx>>fy>>fz>>hx>>hy>>hz;
        for(int q=fx;q<=hx;q++){
            for(int w=fy;w<=hy;w++){
                for(int e=fz;e<=hz;e++){
                    a[q][w][e] = 1;
                }
            }
        }
    }
    int sum =0 ;
    for(int q=1;q<=w;q++){
        for(int w=1;w<=x;w++){
            for(int e=1;e<=h;e++){
                if(a[q][w][e] == 0)sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
