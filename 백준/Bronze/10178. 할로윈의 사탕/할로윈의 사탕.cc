#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << "You get " << a/b << " piece(s) and your dad gets " << a%b << " piece(s).\n";
    }
}