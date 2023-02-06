#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    
    while(a != 0 || b != 0 || c != 0)
    {
        if(c-b == b-a)
            cout << "AP " << c + (c-b) << '\n';
        else
            cout << "GP " << c * (c/b) << '\n';
        
        cin >> a >> b >> c;
    }
}