#include <iostream>
using namespace std;
int main(){
    int a[1005];
    int b[1005];
    int c[1005];
    int sum[1005];
    int n;
    cin>>n;
    b[0] = 1;
    int c_idx = 1;
    int sum_idx = 1;
    sum[0] = 0;
    for(int i =1;i<=n;i++){
        int now = i;
        int idx = 0;
        while(now>0){
            a[idx] = now % 10;
            now /= 10;
            idx++;
        }
        for(int j = 0;j<idx;j++){
            for(int q =0;q<c_idx;q++){
                c[j+q] += a[j] * b[q];
            }
        }
        int len = idx + c_idx -1;
        for(int w = 0;w<len;w++){
            c[w+1] += c[w]/10;
            c[w] %= 10;
            b[w+1] = c[w+1];
            b[w] = c[w];
            c[w] = 0;
        }
        c[len] = 0;
        for(;!b[len]&&len>0;len--){}
        c_idx = len + 1;
        int max_len = max(sum_idx, c_idx);
        for(int i =sum_idx;i<=max_len;i++){
            sum[i] = 0;
        }
        for(int i =c_idx;i<=max_len;i++){
            b[i] = 0;
        }
        for(int q=0;q<max_len;q++){
            int now = sum[q] + b[q];
            sum[q] = now % 10;
            sum[q+1] += now/10;
        }
        sum_idx = max_len;
        if(sum[sum_idx])sum_idx++;
    }
     for(int q =sum_idx -1;q>=0;q--){
            cout<<sum[q];
        }
        cout<<endl;
    return 0;
}
