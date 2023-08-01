#include<bits/stdc++.h>
using namespace std;
bool mymap[105][105];
int dir[4][2] = { {0,2},{2,0},{-2,0},{0, -2}};
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    memset(mymap, false, sizeof(mymap));
    for(int e =0;e<m;e++){
        int i,j;
        cin>>i>>j;
        if(i>=1&&i<=n&&j>=1&&j<=n){
            mymap[i][j] = true;
        }
        for(int q = i - 1;q<=i+1;q++){
            for(int w = j-1;w<=j+1;w++){
                if(q>=1&&q<=n&&w>=1&&w<=n){
                    mymap[q][w] = true;
                }
            }
        }
        for(int q = 0;q<4;q++){
            int nowi = i + dir[q][0];
            int nowj = j + dir[q][1];
            if(nowi>=1&&nowi<=n&&j>=1&&nowj<=n){
                mymap[nowi][nowj] = true;
            }
        }
    }
    for(int e =0;e<k;e++){
        int i,j;
        cin>>i>>j;
        for(int q = i - 2;q<=i+2;q++){
            for(int w = j-2;w<=j+2;w++){
                if(q>=1&&q<=n&&w>=1&&w<=n){
                    mymap[q][w] = true;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(!mymap[i][j])sum++;
        }
    }
    cout<<sum;
    return 0;
 }





