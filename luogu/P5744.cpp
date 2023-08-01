#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int age, score;
        cin>>name>>age>>score;
        score = min(600, (int)(score * 1.2));
        cout<<name<<" "<<age + 1<<" "<<score<<endl;
    }
	return 0;
}

