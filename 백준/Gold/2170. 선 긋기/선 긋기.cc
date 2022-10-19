#include <bits/stdc++.h>

using namespace std;

pair<int,int> p[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int a, b;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
    	cin >> a >> b;
    	p[i].first = min(a, b);
    	p[i].second = max(a, b);
    }
    
    sort(p, p+n);
    
    int st, en = 0;
    long long ans = 0;
    
    en = p[0].second;
    ans = p[0].second - p[0].first;
    for(int i=1; i<n; i++)
    {
        if(p[i].first <= en)
        {
        	if(p[i].second <= en)
        		continue;
        	ans += p[i].second - en;
        }
        else
            ans += p[i].second - p[i].first;
        en = p[i].second;
    }
    cout << ans;
}