#include<bits/stdc++.h>
using namespace std;

struct Student{
    int id;
    double l_score;
    double s_score;
    double sum(){
        return l_score * 0.7f + s_score * 0.3f;
    }
};

int main(){
    int n;
    cin>>n;
    Student s[1005];
    for(int i=0;i<n;i++){
        Student now;
        cin>>now.id>>now.l_score>>now.s_score;
        s[i] = now;
    }
    for(int i=0;i<n;i++){
        cout<<s[i].id<<endl;
        if(s[i].l_score * 7 + s[i].s_score * 3 >=1400)
    }
	return 0;
}


