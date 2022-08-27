#include <bits/stdc++.h>

using namespace std;

int num[21];
int d[10001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
    	int n, k;
    	cin >> n;
    	for(int j=0; j<n; j++)
    		cin >> num[j];
    	cin >> k;
    	for(int l=0; l<n; l++)
	    {
	    	if(num[l] > k)
	    		continue;
	    	d[num[l]]++;
	        for(int j=num[l]; j<=k; j++)
	        {
	            d[j] += d[j-num[l]];
	        }
	    }
	    cout << d[k] << '\n';
	    fill(d+1, d+1+k, 0);
    }

}