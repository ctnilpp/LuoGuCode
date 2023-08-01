#include<iostream>
using namespace std;

int chitao(int n)
{
    if(n==1)return 1;
    return (chitao(n-1) + 1) * 2;
}

int main(){
    int n;
    cin>>n;
    cout<<chitao(n);
	return 0;
}

