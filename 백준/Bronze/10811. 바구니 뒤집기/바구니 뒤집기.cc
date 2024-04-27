#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    vector<int> num(n);
    for(int i=0; i<n; i++)
        num[i] = i+1;
    for(int i=0; i<m; i++)
    {
        int a, b;
        cin >> a >> b;
        reverse(num.begin()+a-1, num.begin()+b);
    }
    for(int i=0; i<n; i++)
        cout << num[i] << ' ';
}