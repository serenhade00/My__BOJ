#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    vector<string> v(2*t);
    for(int i=0; i<2*t; i++)
        cin >> v[i];
    for(int i=0; i<2*t; i+=2)
    {
        cout << "Case " << i/2+1 << ": " << v[i+1] << ", " << v[i] << '\n';
    }
}