#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int b[200*200+10];
int main()
{
    int n;
    cin>>n;
    int a;
    int now_num = 0;
    int step = n;
    int i = 0;
    int j = 0;
    memset(b, 0, sizeof(b));
    int now = 0;
    while(scanf("%d",&a) != EOF){
        b[now++] = a;
    }
    int q = 0;
    while(q<now){
        step = b[q++];
        while(step > 0){
            cout<<now_num;
            j++;
            if(j>=n&&i<n - 1){
                cout<<endl;
                i++;
                j = 0;
            }
            step--;
        }
        if(now_num ==0)now_num =1;
        else now_num = 0;
    }
    return 0;
 }





