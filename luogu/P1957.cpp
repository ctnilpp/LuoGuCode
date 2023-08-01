#include <bits/stdc++.h>
using namespace std;

int calweishu(int a){
    if(a==0)return 1;
    int check = a;
    int weishu = 0;
    while(check >0){
        weishu++;
        check/=10;
    }
    return weishu;
}

int usefuhao(char fuhao, int a, int b){
    switch(fuhao){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
    }
}

int main(){
    int n;
    cin>>n;
    string s;
    string next;
    int a;
    int b;
    int sum = 0;
    char fuhao;
    for(int i=0;i<n;i++){
        cin>>s;
        int use_num = 0;
        if(s[0]>='a'&&s[0]<='c'){
            cin>>a>>b;
            int a_weishu = calweishu(a);
            int b_weishu = calweishu(b);
            if(s[0]=='a'){
                sum = a + b;
                fuhao = '+';
            }
            else if(s[0]=='b'){
                sum = a - b;
                fuhao = '-';
            }
            else{
                sum = a * b;
                fuhao = '*';
            }
            cout<<a<<fuhao<<b<<'='<<sum<<endl;
            int is_fu = 0;
            if(sum<0){
                    is_fu = 1;
                    sum = -sum;
            }
            int sum_weishu = calweishu(sum);
            use_num = a_weishu + b_weishu + sum_weishu + is_fu + 2;
        }
        else{
            cin>>next;
            a = 0;
            b = 0;
            int weishu = 1;
            for(int q = s.length()-1;q>=0;q--){
                a+= (s[q] - '0') * weishu;
                weishu*=10;
            }
            weishu = 1;
             for(int q = next.length()-1;q>=0;q--){
                b+= (next[q] - '0') * weishu;
                weishu*=10;
            }
            int a_weishu = calweishu(a);
            int b_weishu = calweishu(b);
            sum = usefuhao(fuhao, a, b);
            cout<<a<<fuhao<<b<<'='<<sum<<endl;
            int is_fu = 0;
            if(sum<0){
                    is_fu = 1;
                    sum = -sum;
            }
            int sum_weishu = calweishu(sum);
            use_num = a_weishu + b_weishu + sum_weishu + is_fu + 2;
        }
        if(i<n-1)cout<<use_num<<endl;
        else cout<<use_num;
    }
    return 0;
}
