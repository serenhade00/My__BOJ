#include <bits/stdc++.h>

using namespace std;

bool col_used[15];
bool d1_used[30];
bool d2_used[30];
int N;
int cnt;
void n_queen(int cur)
{
	if(cur==N)
	{
		cnt++;
		return;
	}
	for(int i=0; i<N; i++)
	{
		if(col_used[i] || d1_used[cur+i] || d2_used[cur-i+N-1])
			continue;
		col_used[i] = 1;
		d1_used[cur+i] = 1;
		d2_used[cur-i+N-1] = 1;
		n_queen(cur+1);
		col_used[i] = 0;
		d1_used[cur+i] = 0;
		d2_used[cur-i+N-1] = 0;
	}
}
int main(void)
{
	cin >> N;
	n_queen(0);
	cout << cnt;
}