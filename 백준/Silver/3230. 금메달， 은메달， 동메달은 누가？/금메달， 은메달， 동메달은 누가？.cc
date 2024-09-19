#include <bits/stdc++.h>

using namespace std;

int fir[101];
int sec[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, r;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
    {
        cin >> r;
        if(r <= m)
        {
        	if(fir[r])
            {
            	for(int j=m-1; j>=r; j--)
                	fir[j+1] = fir[j]; 
            }
            fir[r] = i;
        }
    }
    vector<int> tmp(m+1);
    for(int i=1; i<=m; i++)
        cin >> tmp[i];
    
    for(int i=1; i<=m; i++)
    {
        if(tmp[i] <= 3)
        {
        	if(sec[tmp[i]])
        	{
        		for(int j=2; j>=tmp[i]; j--)
                	sec[j+1] = sec[j]; 
        	}
            sec[tmp[i]] = fir[m-i+1];
        }
    }
    for(int i=1; i<=3; i++)
    	cout << sec[i] << '\n';
}