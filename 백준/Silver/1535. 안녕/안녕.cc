#include <bits/stdc++.h>

using namespace std;

int bag[101][101];
int thing[101][2];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> thing[i][0];
    for(int i=1; i<=n; i++)
        cin >> thing[i][1];
	
	for(int i=1; i<=n; i++)
	{
		int weight = thing[i][0];
		int val = thing[i][1];
		for(int j=1; j<=99; j++)
		{
			if(weight > j)
				bag[i][j] = bag[i-1][j];
			else
				bag[i][j] = max(bag[i-1][j], bag[i-1][j-weight]+val);
		}
	}
	cout << bag[n][99];
	
}