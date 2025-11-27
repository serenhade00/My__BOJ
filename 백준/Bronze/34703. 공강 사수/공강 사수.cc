#include <bits/stdc++.h>

using namespace std;

bool num[6];
int main(void)
{
    int n, val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        num[val] = 1;
    }
    for(int i=1; i<=5; i++)
    {
        if(!num[i])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}