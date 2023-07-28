#include <bits/stdc++.h>
using namespace std;
int main(){
    int x = 1;
    int num;
    int result_x = 1;
    int result_k = 1;
    cin>>num;
    while(x<=100){
        int k = 0;
        int sum = 0;
        while(sum<num){
            k++;
            sum = 52 * 7 * (x + 3 * k);
        }
        if(sum==num){
            if(x > result_x){
                result_x = x;
                result_k = k;
            }
            else{
                result_k = min(result_k, k);
            }
        }
        x++;
    }
    cout<<result_x<<endl;
    cout<<result_k;
    return 0;
}
