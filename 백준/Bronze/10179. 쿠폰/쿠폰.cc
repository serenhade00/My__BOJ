#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    cout.precision(2);
    cout << fixed;
    for(int i=0; i<t; i++)
    {
        double tmp;
        cin >> tmp;
        cout << "$" << tmp*0.8 << '\n';
    }
}