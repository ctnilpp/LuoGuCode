//请你修改if()中的逻辑表达式，在一个字母前加!或者去掉!，使整个逻辑表达式的值变为false。
#include <bits/stdc++.h>
using namespace std;
int main(){
    bool a = true;
    bool b = false;
    bool c = a && b;
    bool d = a || b;
    if(!a||b && !d || c && !a)cout<<true;//请修改这一句，且只能在一个字母前加!或者去掉!
    else cout<<false;
}




