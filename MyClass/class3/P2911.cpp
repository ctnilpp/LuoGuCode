#include<bits/stdc++.h>
using namespace std;
int a[90] = {};
int main()
{
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
                for(int k=1;k<=s3;k++){
                    a[i+j+k]++;
                }
        }
    }
    int max_num = INT_MIN;
    int idx = 0;
    for(int q=3;q<=s1+s2+s3;q++){
        if(a[q]>max_num){
            max_num = a[q];
            idx = q;
        }
    }
    cout<<idx;
    return 0;
 }


