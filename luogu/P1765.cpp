#include<bits/stdc++.h>
using namespace std;
int num[27];
int main(){
    int now = 1;
    for(int i=1;i<=15;i++){
        num[i] = now;
        now = now + 1 > 3?1:now + 1;
    }
    num[16] = 1;
    num[17] = 2;
    num[18] = 3;
    num[19] = 4;
    num[20] = 1;
    num[21] = 2;
    num[22] = 3;
    num[23] = 1;
    num[24] = 2;
    num[25] = 3;
    num[26] = 4;

    char b[205];
    int result = 0;
    cin.getline(b, 205);
    int idx = 0;
    while(b[idx]!='\0'){
        if(b[idx]== ' ')result++;
        else{
            int now = (int)(b[idx] - 'a' + 1);
            result += num[now];
        }
        idx++;
    }
    cout<<result;
	return 0;
}


