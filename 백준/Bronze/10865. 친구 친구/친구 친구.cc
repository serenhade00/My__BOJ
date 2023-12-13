#include <bits/stdc++.h>

using namespace std;

int num[100001];

int main(void)
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        num[a]++, num[b]++;
    }
    for(int i=1; i<=n; i++)
        cout << num[i] << '\n';
}