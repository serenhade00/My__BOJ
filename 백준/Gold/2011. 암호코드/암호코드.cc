#include <bits/stdc++.h>

using namespace std;

int dp[5001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    
    if(s[0]=='0')
    {
    	cout << 0;
    	return 0;
    }
    int len = s.size();
    
    dp[1] = 1;
    if(s.size() > 1)
    {
    	int st = stoi(s.substr(0, 2));
	    if(st == 10 || st == 20)
	    	dp[2] = 1;
	    else if(st >= 11 && st <= 26)
	        dp[2] = 2;
	    else
	    {
	    	if(st % 10 == 0)
	    	{
	    		cout << 0;
	    		return 0;
	    	}
	    	dp[2] = 1;
	    }
    }
   
    for(int i=3; i<=len; i++)
    {
    	int tmp = stoi(s.substr(i-2, 2));
 
    	if(tmp == 10 || tmp == 20)
    		dp[i] = dp[i-2] % 1000000;
    	else if(tmp >= 11 && tmp <= 26)
    		dp[i] = (dp[i-2]*2+(dp[i-1]-dp[i-2])) % 1000000;
    	else
    	{
    		if(tmp % 10 == 0)
	    	{
	    		cout << 0;
	    		return 0;
	    	}
	    	dp[i] = dp[i-1];
    	}
    }
    
    cout << dp[len];
}