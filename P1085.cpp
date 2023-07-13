#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int max_unhappy = 0;
    for(int i=1;i<=7;i++){
        int school,home;
        cin>>school>>home;
        int now_unhappy = school + home;
        bool is_unhappy = now_unhappy > 8?true:false;
        if(is_unhappy && now_unhappy > max_unhappy){
            max_unhappy = now_unhappy;
            result = i;
        }
    }
    cout<<result<<endl;
    return 0;
}
