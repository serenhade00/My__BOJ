#include <bits/stdc++.h>

using namespace std;

int num[101];

int main(void)
{
    int n, val;
    cin >> n;
    num[1] = 1;
    for(int i=2; i<=n; i++)
    {
        cin >> val;
        num[val+2] = i;
    }
    for(int i=1; i<=n; i++)
        cout << num[i] << ' ';
}