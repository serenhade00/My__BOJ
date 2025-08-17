#include <bits/stdc++.h>
using namespace std;
int num[101];
int main(void)
{
    int t, val, mx = 0, mn = 1001;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> num[i];
        mx = max(mx, num[i]);
        mn = min(mn, num[i]);
    }
    num[0] != mx && num[0] != mn ? cout << "?" : num[0] == mx ? cout << "hard" : cout << "ez"; 
}