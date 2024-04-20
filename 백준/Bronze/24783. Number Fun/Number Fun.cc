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
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b == c || abs(a-b) == c || a*b == c || (a/b == c && a%b == 0)|| (b/a == c && b%a == 0))
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}