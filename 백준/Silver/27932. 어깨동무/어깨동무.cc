#include <bits/stdc++.h>

using namespace std;

int num[1000001];

int main(void)
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    	cin >> num[i];
    
    num[0] = num[1], num[n+1] = num[n];
    int st = -1, en = 1000000001, mid;
    while(st+1 < en)
    {
    	int tired = 0;
    	int mid = (st+en)/2;
    	for(int i=1; i<=n; i++)
    	{
    		if(abs(num[i]-num[i-1]) > mid || abs(num[i+1]-num[i]) > mid)
    			tired++;
    	}
    	if(tired > k)
    		st = mid;
    	else
    		en = mid;   
    }
    cout << en;
}