//输入一个数，请你用switch检查其是四舍，还是五入,请补充程序使其正确运行
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch(x%10){
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            cout<<"可以五入"<<endl;
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout<<"可以四舍"<<endl;
            break;
    }
    return 0;
}

