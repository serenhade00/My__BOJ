#include <bits/stdc++.h>

using namespace std;

int num[5];

int main(void)
{
    int t, a = 1, b = 1, c = 0;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> num[i];
    if(num[0] > num[2])
        a *= abs(num[0]-num[2]) * 508;
    else
        a *= abs(num[0]-num[2]) * 108;
    if(num[1] > num[3])
        b *= abs(num[1]-num[3]) * 212;
    else
        b *= abs(num[1]-num[3]) * 305;
    if(num[4])
        c += num[4]*707;
   
    cout << (a + b + c)*4763;
}