#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, ans, val;
    cin >> a >> b;
    
    for(int i=0; i<a; i++)
    {
        cin >> ans >> val;
        if(ans != val)
        {
            cout << "Wrong Answer";
            return 0;
        }
    }
    for(int i=0; i<b; i++)
    {
        cin >> ans >> val;
        if(ans != val)
        {
            cout << "Why Wrong!!!";
            return 0;
        }
    }
    cout << "Accepted";
}