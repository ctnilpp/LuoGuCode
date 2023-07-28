//请你在下面回答为何程序无法运行，并且只删除一处关键字，使程序能够正常运行
//答：因为const定义的变量为常量，其值若被修改则会报错，const，程序便能正常运行
#include <bits/stdc++.h>
using namespace std;
int main(){
    double n = 3.14;
    n = 3.15;
    cout<<n<<endl;
    return 0;
}




