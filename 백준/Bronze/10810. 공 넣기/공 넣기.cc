#include <bits/stdc++.h>

using namespace std;

int box[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i<m; i++)
    {
        int a, b, num;
        cin >> a >> b >> num;
        for(int j=a; j<=b; j++)
            box[j] = num;
    }
    for(int i=1; i<=n; i++)
        cout << box[i] << ' ';
}