#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int len = s.size(), sum = 1, tmp = 1;
    for(int i=1; i<len; i++)
    {
        if(s[i] > s[i-1])
            tmp++;
        else
            tmp = 1;
        sum += tmp;
    }
    cout << sum;
}