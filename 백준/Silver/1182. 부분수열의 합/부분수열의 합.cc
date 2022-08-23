#include <bits/stdc++.h>

using namespace std;

int N,S;
int a[21];
int cnt;

void subseq(int cur, int total)
{
	if(cur==N)
	{
		if(total==S)
		{
			cnt++;
		}
		return;
	}
	subseq(cur+1, total);
	subseq(cur+1, total+a[cur]);
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> S;
	for(int i=0; i<N; i++)
		cin >> a[i];
	subseq(0, 0);
	if(S==0)
		cnt--;
	cout << cnt;
}