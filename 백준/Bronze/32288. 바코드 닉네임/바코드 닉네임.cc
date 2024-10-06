#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'l')
            cout << 'L';
        else
            cout << 'i';
    }
}