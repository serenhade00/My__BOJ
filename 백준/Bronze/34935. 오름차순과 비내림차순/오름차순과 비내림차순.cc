#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool op = 0;
    long long val, prev;
    cin >> n >> prev;
    for(int i=1; i<n; i++)
    {
        cin >> val;
        if(val == prev)
            op = 1;
        prev = val;
    }
    if(op)
        cout << 0;
    else
        cout << 1;
}