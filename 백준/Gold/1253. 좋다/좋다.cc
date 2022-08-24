#include <bits/stdc++.h>

using namespace std;

int num[2001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int val;
    int ans = 0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num, num+n);
    
    for(int i=0; i<n; i++)
    {
    	int st = 0, en = n-1;
        while(st < en)
        {
        	if(st == i)
        		st++;
        	if(en == i)
        		en--;
        	if(st >= en)
        		break;
        	if(num[st]+num[en] < num[i])
        		st++;
        	else if(num[st]+num[en] > num[i])
        		en--;
        	else
        	{
        		ans++;
        		break;
        	}
        }
    }
    cout << ans;
}