#include <iostream>
#include <cstring> //memset & strlen ”√cstring
#include <cstdio> //sscanf & sprintf ”√cstdio
using namespace std;
int main(){
    int n;
    cin>>n;
    char num[10], s[105];
    char fuhao;
    int a;
    int b;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num[0]>='a'&&num[0]<='c'){
            cin>>a>>b;
            fuhao = num[0];
        }
        else {
            sscanf(num, "%d", &a);
            cin>>b;
        }
        switch(fuhao){
            case 'a':
                sprintf(s, "%d+%d=%d", a, b,a+b);
                break;
            case 'b':
                sprintf(s, "%d-%d=%d", a, b,a-b);
                break;
            case 'c':
                sprintf(s, "%d*%d=%d", a, b,a*b);
                break;
        }
        cout<<s<<endl<<strlen(s)<<endl;
    }
    return 0;
}
