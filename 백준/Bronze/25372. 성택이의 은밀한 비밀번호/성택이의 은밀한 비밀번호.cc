#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string s;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        cin >> s;
        int len = s.size();
        if(len >= 6 && len <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}