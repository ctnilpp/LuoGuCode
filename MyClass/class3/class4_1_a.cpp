//�����޸�if()�е��߼����ʽ����һ����ĸǰ��!����ȥ��!��ʹ�����߼����ʽ��ֵ��Ϊfalse��
#include <bits/stdc++.h>
using namespace std;
int main(){
    bool a = true;
    bool b = false;
    bool c = a && b;
    bool d = a || b;
    if(!a||b && !d || c && !a)cout<<true;//���޸���һ�䣬��ֻ����һ����ĸǰ��!����ȥ��!
    else cout<<false;
}




