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
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int n, val;
        long long ans = 0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> val;
            pq.push(val);
        }
        if(pq.size() == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        while(!pq.empty())
        {
        	long long sum = 0;
            for(int k=0; k<2; k++)
            {
                sum += pq.top();
                pq.pop();
            }
            ans += sum;
            if(pq.empty())
            	break;
            pq.push(sum);
        }
        cout << ans << '\n';
    }
}