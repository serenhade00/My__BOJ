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
        int n;
        long long val;
        long long ans = 1;
        cin >> n;
        
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for(int j=0; j<n; j++)
        {
            cin >> val;
            pq.push(val);
        }
        
        if(n==1)
        {
            cout << 1 << '\n';
            continue;
        }
        while(pq.size() > 1)
        {
            long long x = pq.top();
            pq.pop();
            long long y = pq.top();
            pq.pop();
           
            ans *= (x*y) % 1000000007;
            ans %= 1000000007;
            pq.push(x*y);
        }
        cout << ans << '\n';
    }
}