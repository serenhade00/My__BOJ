#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, len, mul = 1, sum = 0;
    string s;
    cin >> s >> n;
    len = s.size();
    for(int i=len-1; i>=0; i--)
    {
        if(s[i] >= 65)
            sum += mul * (s[i]-55);
        else
            sum += mul * (s[i]-'0');
        mul *= n;
    }
    cout << sum;
}