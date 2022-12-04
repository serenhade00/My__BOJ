#include <bits/stdc++.h>

using namespace std;

long long num[5001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    int len = 2*n;
    long long ans_cur, ans_left, ans_right;
    long long gap = 50000000000001;
    
    for(int i=0; i<n; i++)
    {
    	int st = 0, en = n-1;
    	long long left, right;
    	long long sum = 0, val = 50000000000001;
    	long long cur = num[i];
		long long mid = cur*-1;
		if(i==0)
			st = 1;
		if(i==n-1)
			en = n-2;
	
		while(len--)
	    {
	        sum = num[st]+num[en];
	        if(abs(mid-sum) < abs(mid-val))
	        {
	        	val = sum;
	        	left = num[st];
	        	right = num[en];
	        }
	        if(sum < mid)
	        {
	        	st++;
	        	if(st == i)
	        		st++;
	        }
	        else
	        {
	        	en--;
	        	if(en==i)
	        		en--;
	        }
	        if(st >= en)
	            break;
	        
	    }
		if(abs(mid-val) < gap)
	    {
	    	gap = abs(mid-val);
	    	ans_cur = cur, ans_left = left, ans_right = right;
	    }
    }
    vector<long long> v;
    v.push_back(ans_cur), v.push_back(ans_left), v.push_back(ans_right);
    sort(v.begin(), v.end());
    
    for(auto e : v)
    	cout << e << ' ';

}