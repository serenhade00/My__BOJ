#include <bits/stdc++.h>

using namespace std;

set<int> num;

void solve(int n)
{
    int mn = 500010;
    mn = min(mn, abs(n - 100));
    if(num.find(0) == num.end())
    	mn = min(mn, n + 1);
    for(int i=1; i<=1000000; i++)
    {
    	int cnt = 0;
        bool op = 0;
        int tmp = i;
        while(tmp > 0)
        {
            if(num.find(tmp % 10) != num.end())
                op = 1;
            if(op)
                break;
            tmp /= 10;
            cnt++;
        }
        if(op)
            continue;
        else
    	    mn = min(mn, abs(n - i) + cnt);
    }
    cout << mn;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> val;
        num.insert(val);
    }
    if(n == 100)
    {
        cout << 0;
        return 0;
    }
    solve(n);    
}