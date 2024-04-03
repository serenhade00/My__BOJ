#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string ad[5], no[5];
    int a, b;
    cin >> a >> b;
    for(int i=0; i<a; i++)
        cin >> ad[i];
    for(int i=0; i<b; i++)
        cin >> no[i];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
            cout << ad[i] << " as " << no[j] << '\n';
    }
}