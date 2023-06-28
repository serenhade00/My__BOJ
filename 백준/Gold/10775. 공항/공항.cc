#include <bits/stdc++.h>

using namespace std;

set<int> s;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int g, p, val, ans = 0;
    cin >> g >> p;
    
    for(int i=1; i<=g; i++)
    	s.insert(i);
    	
    for(int i=0; i<p; i++)
    {
        cin >> val;
        auto it = s.upper_bound(val);
        
        if(it == s.begin())
        	break;
        it--;
        s.erase(it);
    	ans++;
    }
    cout << ans;
}