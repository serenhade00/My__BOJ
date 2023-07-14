#include <bits/stdc++.h>

using namespace std;

string v[100001];

int dist(int a, int b)
{
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        if(v[a][i] != v[b][i])
            sum++;
    }
    return sum;
}

void solve(int n)
{
    int mn = 12;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int cur = dist(i, j) + dist(j, k) + dist(k, i);
                mn = min(mn, cur);
            }
        }
    }
    cout << mn << '\n';
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        string s;
        cin >> n;
        for(int j=0; j<n; j++)
        	cin >> v[j];
        if(n > 32)
        {
            cout << 0 << '\n';
            continue;
        }
        else
            solve(n);
    }
}