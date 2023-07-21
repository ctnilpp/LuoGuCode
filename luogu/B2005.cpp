#include<iostream>
using namespace std;
int main() {
    char use;
    cin>>use;
    printf("  %c\n", use);
    printf(" %c%c%c\n", use, use, use);
    for(int i =0; i < 5; i++)
    {
        printf("%c", use);
    }
    cout<<endl;
    return 0;
}
