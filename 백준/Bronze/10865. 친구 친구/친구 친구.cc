#include <bits/stdc++.h>

using namespace std;

int num[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
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