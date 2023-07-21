#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[8] = {0, 250, 500, 750, 1000,1250,1250,1250};
    int x,n;
    int result = 0;
    cin>>x>>n;
    int now = x+n-1;
    if(now<=7){
        if(now == 6 ||now==7)
            result = (6-x)*250;
        else result = n * 250;
    }
    else {
        int head;
        if(x==6||x==7)head = 0;
        else head = (6-x)*250;
        int mid_num = (now)/7 - 1;
        int mid = mid_num * 1250;
        int tail_idx = (now)%7;
        int tail = a[tail_idx];
        result = head + mid + tail;
    }
    cout<<result<<endl;
    return 0;
}
