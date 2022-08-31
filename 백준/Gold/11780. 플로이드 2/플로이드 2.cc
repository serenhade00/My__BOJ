#include <bits/stdc++.h>

using namespace std;

const int INF = 10000000;
int d[101][101];
int nxt_path[101][101];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	int x, y, v;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		fill(d[i], d[i]+n+1, INF);
	for(int i=1; i<=n; i++)
		d[i][i] = 0;
	for(int i=0; i<m; i++)
	{
		cin >> x >> y >> v;
		d[x][y] = min(d[x][y], v);
        nxt_path[x][y] = y;
	}
	
	for(int k=1; k<=n; k++)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(k==i)
					continue;
				if(i==j)
					continue;
				if(j==k)
					continue;
				if(d[i][k]+d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k]+d[k][j];
                    nxt_path[i][j] = nxt_path[i][k];
                }
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(d[i][j]==INF)
				cout << 0 << ' ';
			else
				cout << d[i][j] << ' ';
		}
		cout << '\n';
	}
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j || d[i][j] == INF)
                cout << 0;
            else
            {
                int st = i, en = j;
                vector<int> path;
                path.push_back(i);
                while(st != j)
                {
                    path.push_back(nxt_path[st][en]);
                    st = nxt_path[st][en];
                }
                cout << path.size() << ' ';
                for(auto cur : path)
                    cout << cur << ' ';
            }
            cout << '\n';
        }
    }
}