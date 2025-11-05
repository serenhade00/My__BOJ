#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10];
bool isused[10];
void backtrack(int k)
{
	if(k==m)
	{
		for(int i=0; i<m; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		
		return;
	}
	else
	{
		for(int i=1; i<=n; i++)
		{
			if(!isused[i])
			{
				arr[k] = i;
				int z = i;
				while(z)
				{
					isused[z] = 1;
					z--;
				}
				backtrack(k+1);
				z = arr[m-1];
				while(z)
				{
					isused[z] = 0;
					z--;
				}
			}
		}
	}
}
int main(void)
{
	cin >> n >> m;
	backtrack(0);
}