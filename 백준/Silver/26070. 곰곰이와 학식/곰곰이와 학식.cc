#include <bits/stdc++.h>

using namespace std;

long long ans;
long long students[4];
long long tickets[4];

void add(int idx) // 티켓 및 학생 수 관리
{
	if(tickets[idx] >= students[idx])
	{
		if(students[idx] > 0)
		{
			ans += students[idx];
			tickets[idx] -= students[idx];
			students[idx] = 0;
		}
	}
	else
	{
		if(students[idx] > 0)
		{
			ans += tickets[idx];
			students[idx] -= tickets[idx];
			tickets[idx] = 0;
		}
	}
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=1; i<=3; i++)
    	cin >> students[i];
    for(int i=1; i<=3; i++)
    	cin >> tickets[i];
    	
    for(int i=1; i<=3; i++)
    	add(i);
    
    long long mx = 0, cur_idx;
    for(int i=1; i<=3; i++) // 가장 티켓 수가 많이 남은 음식부터 티켓 교환 시작
    {
    	if(tickets[i] > mx)
    	{
    		mx = tickets[i];
    		cur_idx = i;
    	}
    }
	
    if(mx < 3)             // 만약 mx가 3보다 작으면 더 이상 교환할 수 있는 티켓 x
    {
    	cout << ans;
    	return 0;
    }
	
    while(mx >= 3)         // 교환 가능 티켓이 존재할 경우(3개 이상) 계속 교환하며 정답 누적
    {
    	tickets[cur_idx] -= mx;
    	cur_idx++;
    	if(cur_idx == 4)
    		cur_idx = 1;
    	
    	tickets[cur_idx] += mx / 3;
    	add(cur_idx);
    
    	mx = tickets[cur_idx];
    }
    cout << ans;
}