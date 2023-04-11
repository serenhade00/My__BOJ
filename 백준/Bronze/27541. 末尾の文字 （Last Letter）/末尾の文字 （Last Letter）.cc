#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    
    if(s[n-1] == 'G')
    {
        for(int i=0; i<n-1; i++)
            cout << s[i];
    }
    else
        cout << s + 'G';
}