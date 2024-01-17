#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    vector<int> v;
    int n, tmp;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> tmp;
        v.insert(v.begin()+tmp, i);
    }
    for(int i=n-1; i>=0; i--)
        cout << v[i] << ' ';
}