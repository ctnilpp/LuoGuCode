#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int max_num = max(max(a,b), max(b,c));
    if(b==max_num){
        int temp = b;
        b = a;
        a = temp;
    }
    else if(c == max_num){
        int temp = c;
        c = a;
        a = temp;
    }
    int rest_num = a+b+c - max_num;
    if(max_num >= rest_num)cout<<"Not triangle"<<endl;
    else{
        if(a * a == b *b + c*c)cout<<"Right triangle"<<endl;
        else if(a * a < b *b + c*c)cout<<"Acute triangle"<<endl;
        else cout<<"Obtuse triangle"<<endl;

        if(a == b || b == c || a==c)cout<<"Isosceles triangle"<<endl;
        if(a == b && b == c) cout<<"Equilateral triangle"<<endl;
    }
    return 0;
}
