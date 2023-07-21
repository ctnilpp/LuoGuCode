#include<bits/stdc++.h>
using namespace std;
int main()
{
    char hundreds, tens, ones, little_ones, point;
    scanf("%c%c%c.%c", &hundreds, &tens, &ones, &little_ones);
    printf("%c.%c%c%c", little_ones, ones, tens, hundreds);
    return 0;
 }

