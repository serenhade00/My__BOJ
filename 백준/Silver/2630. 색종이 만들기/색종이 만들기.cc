#include <bits/stdc++.h>

using namespace std;

int p[130][130];
int b = 0;
int w = 0;
int cnt;
void paper_cut(int x, int y, int num)
{
	int flag = 1;
	int color = p[x][y];
	int tmp = num/2;
	for(int i=x; i<x+num; i++)
	{
		for(int j=y; j<y+num; j++)
		{
			if(p[i][j] != color)
			{
				flag = 0;
				break;
			}
		}
		if(!flag)
			break;
	}
	
	if(flag)
	{
		if(color)
			b++;
		else
			w++;
	}
	else
	{
		paper_cut(x, y, tmp);
		paper_cut(x, y+tmp, tmp);
		paper_cut(x+tmp, y, tmp);
		paper_cut(x+tmp, y+tmp, tmp);
	}
	
}

int main(void)
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin >> p[i][j];
	}
	
	paper_cut(0, 0, n);
	cout << w << '\n' << b;
}