#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        cout << a - (b/7) + (b/4) << '\n';
    }
}