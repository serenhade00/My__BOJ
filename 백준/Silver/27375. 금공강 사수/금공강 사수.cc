#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

int n, k, cnt;
int used[6][11];
pair<int, pair<int,int>> p[21];

void backtrack(int cur, int total)
{
	if(total >= k)
	{
		if(total==k)
			cnt++;
		return;
	}
	
	for(int i=0; i<n; i++)
	{
		if(i < cur || p[i].X == 5)
			continue;
		bool op = 0;
		for(int j=p[i].Y.X; j<=p[i].Y.Y; j++)
		{
			if(used[p[i].X][j])
			{
				op = 1;
				break;
			}
		}
		if(!op)
		{
			for(int j=p[i].Y.X; j<=p[i].Y.Y; j++)
				used[p[i].X][j] = 1;
			backtrack(i, total + p[i].Y.Y - p[i].Y.X + 1);
			for(int j=p[i].Y.X; j<=p[i].Y.Y; j++)
				used[p[i].X][j] = 0;
		}
	}
}
int main(void)
{
    cin >> n >> k;

    for(int i=0; i<n; i++)
    	cin >> p[i].X >> p[i].Y.X >> p[i].Y.Y;

    backtrack(0, 0);
	cout << cnt;
}