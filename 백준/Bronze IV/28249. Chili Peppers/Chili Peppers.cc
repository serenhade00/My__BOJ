#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, sum = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s[0] == 'P')
            sum += 1500;
        else if(s[0] == 'M')
            sum += 6000;
        else if(s[0] == 'S')
            sum += 15500;
        else if(s[0] == 'C')
            sum += 40000;
        else if(s[0] == 'T')
            sum += 75000;
        else
            sum += 125000;
    }
    cout << sum;
}