#include<iostream>
#include<bits/stdc++.h>
// �����������Ҫ������ͷ�ļ�
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        // ճ������ 1 �����������룬���� return 0
        cout << "I love Luogu!";
    } else if (T == 2) {
        // ճ������ 2 �����������룬���� return 0
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        int num = 14 / 4;
        int sum = num * 4;
        int remain = 14 - sum;
        cout<<num<<endl;
        cout<<sum<<endl;
        cout<<remain<<endl;
        // ������������� 3 �Ĵ���
    } else if (T == 4) {
        double result = 500.0 / 3.0;
        cout<<setiosflags(ios::fixed)<<setprecision(3)<<result<<endl;
        // ������������� 4 �Ĵ���
    } else if (T == 5) {
        printf("%d", (260 + 220) / (12 + 20));
        // ������������� 5 �Ĵ���
    } else if (T == 6) {
        double a = 6;
        double b = 9;
        double sum = sqrt(a * a + b * b);
        cout<<sum<<endl;
        // ������������� 6 �Ĵ���
    } else if (T == 7) {
        cout<<"110"<<endl;
        cout<<"90"<<endl;
        cout<<"0"<<endl;
        // ������������� 7 �Ĵ���
    } else if (T == 8) {
        double pi = 3.141593;
        double r = 5.0;
        cout<<2 * r * pi<<endl;
        cout<<pi * pow(r, 2)<<endl;
        cout<<pi * pow(r, 3) * 4 / 3 <<endl;
        // ������������� 8 �Ĵ���
    } else if (T == 9) {
        int remain = 1;
        for(int i = 1; i <= 3; i++)
        {
            remain = (remain + 1) * 2;
        }
        cout<<remain<<endl;
        // ������������� 9 �Ĵ���
    } else if (T == 10) {
        cout<<"9"<<endl;
        // ������������� 10 �Ĵ���
    } else if (T == 11) {
        double a = 5;
        double b = 8;
        double num = 100 / (b- a);
        cout<<num<<endl;
        // ������������� 11 �Ĵ���
    } else if (T == 12) {
        cout<<'M' - 'A' + 1<<endl;
        cout<<(char)('A' + 17) <<endl;
        // ������������� 12 �Ĵ���
    } else if (T == 13) {
        double pi = 3.141593;
        double ball_v = pi * (pow(10, 3) + pow(4, 3)) * 4 / 3;
        double a = pow(ball_v, 1.0 * 1/3);
        cout<<(int)a<<endl;
        // ������������� 13 �Ĵ���
    } else if (T == 14) {
        cout<<"50"<<endl;
        // ������������� 14 �Ĵ���
    }
    return 0;
}
