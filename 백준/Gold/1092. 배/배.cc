#include <bits/stdc++.h>

using namespace std;

int crane[51];
int box[10001];
int cur_crane[51];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> crane[i];
		
	cin >> m;
	for(int i=0; i<m; i++)
		cin >> box[i];
	
	sort(crane, crane+n);
	sort(box, box+m);
	
	if(box[m-1] > crane[n-1])                // 제일 무거운 박스가 최대 크레인보다 크면 옮기기 x
	{
		cout << -1;
		return 0;
	}
	int idx = 0;	
	for(int i=0; i<m; )                          // 그 크레인만이 옮기기 시작할 수 있는 박스 개수. 각 값은 독립.
	{
		int cur_box = box[i];
		if(crane[idx] >= cur_box)
		{
			cur_crane[idx]++, i++;
		}
		else
			idx++;
	}
	
	int days = 0;
	while(1)
	{
		bool op = 0;
		for(int i=0; i<n; i++)
		{
			if(cur_crane[i])                     // 이 크레인으로 옮길 수 있는 박스 남아있으면 옮기기
			{
				cur_crane[i]--;
				op = 1;
			}
			else
			{
				for(int j=i-1; j>=0; j--)        // 이 크레인으로 greedy하게 옮길 수 없는게 없으면, 앞 box들 가져옴.
				{
					if(cur_crane[j])
					{
						cur_crane[j]--;
						op = 1;
						break;
					}
				}
			}
		}
		if(!op)
			break;
		days++;
	}
	cout << days;
}