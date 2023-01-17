#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    cin >> s;
    
    int len = s.size();
    int sum = 0;
    
    s = 'A' + s;
    for(int i=0; i<len; i++)
    {
        int in, out;
        in = abs(s[i+1]-s[i]);
        out = abs((min(s[i], s[i+1])+26) - max(s[i], s[i+1]));
        
        sum += min(in, out);
    }
    cout << sum;
}