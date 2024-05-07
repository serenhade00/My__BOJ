#include <bits/stdc++.h>

using namespace std;

int num[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n != 0)
    {
        int ans = 0;
        for(int i=0; i<n; i++)
            cin >> num[i];
        for(int i=1; i<n-1; i++)
        {
            if(num[i-1] < num[i] && num[i+1] < num[i])
                ans++;
        }
        cout << ans << '\n';
        cin >> n;
    }
}