#include <bits/stdc++.h>

using namespace std;

int num[1001];
int d[1001];
int track[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int ans = 1, mx_idx = 1;
    cin >> n;
    fill(d+1, d+n+1, 1);
    for(int i=1; i<=n; i++)
        cin >> num[i];
    for(int i=1; i<=n; i++)
    {
        int cur = num[i];
        for(int j=1; j<i; j++)
        {
            if(num[j] < cur)
            {
                if(d[j]+1 > d[i])
                {
                    d[i] = d[j]+1;
                    track[i] = j;
                }
            }
        }
        if(d[i] > ans)
        {
        	ans = d[i];
        	mx_idx = i;
        }
    }
    cout << ans << '\n';
    vector<int> v;
    int cur = mx_idx;
    while(cur)
    {
        v.push_back(num[cur]);
        cur = track[cur];
    }
    int len = v.size();
    for(int i=len-1; i>=0; i--)
    	cout << v[i] << ' ';
}