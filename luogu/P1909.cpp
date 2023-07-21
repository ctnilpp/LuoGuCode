#include <iostream>
using namespace std;
int main()
{
    int n;
    int result = 0x7fffffff;
    cin>>n;
    for(int i=0;i<3;i++){
        int m_size, cost;
        cin>>m_size>>cost;
        int num = n / m_size;
        int rest = n % m_size;
        if(rest > 0)num++;
        int sum = num * cost;
        result = sum < result?sum:result;
    }
    cout<<result<<endl;
    return 0;
}
