//ÇëÍ¨¹ıÂå¹ÈP1422
#include <bits/stdc++.h>
using namespace std;
int main(){
    int use;
    cin>>use;
    float result = 0;
    float x1 = 0.4463f;
    float x2 = 0.4663f;
    float x3 = 0.5663f;
    if(use <= 150){
        result = use * x1;
    }
    else if(use <= 400){
        result = 150 *x1 + (use - 150) * x2;
    }
    else result = 150 *x1 + 250 * x2 + (use - 400) * x3;
    cout<<fixed<<setprecision(1)<<result<<endl;
    return 0;
}





