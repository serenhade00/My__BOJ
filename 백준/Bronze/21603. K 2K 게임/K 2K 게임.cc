#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    int a = k % 10, b = 2*k % 10;
    for(int i=1; i<=n; i++)
    {
        if(i % 10 != a && i % 10 != b)
            v.push_back(i);
    }
    cout << v.size() << '\n';
    for(auto e : v)
        cout << e << ' ';
}