//����һ������������switch����������ᣬ��������,�벹�����ʹ����ȷ����
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
            cout<<"��������"<<endl;
            break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout<<"��������"<<endl;
            break;
    }
    return 0;
}

