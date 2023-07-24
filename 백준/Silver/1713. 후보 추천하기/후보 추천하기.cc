#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;

bool chk[101];
int likes[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> q; // 학생 순서 관리
    int n, m, num;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> num;
        if(q.size() < n) // 사진틀 여유가 있으면
        {
            if(!chk[num]) // 새로운 학생이면 push
            {
            	q.push(num);
            	chk[num] = 1;
            	likes[num]++;
            }
			else // 기존 학생이면 추천수만 증가
				likes[num]++;
        }
        else 
        {
        	int trial = q.size(); // 큐 업데이트 위한 체크 횟수 
        	int mn_num = 10001, mn_idx;
            if(chk[num]) // 기존 학생이면 추천수만 증가
                likes[num]++;
            else
            {
            	for(int i=1; i<=100; i++) // 새로운 학생이면 가장 추천수 낮은 학생 번호, 추천수 탐색
            	{
            		if(chk[i] && likes[i] < mn_num)
            		{
            			mn_num = likes[i], mn_idx = i;
            		}
            	}
            	bool op = 0; // 가장 오래된 학생 찾기 위한 체크 변수
                while(trial--)
                {
                	int cur = q.front(); q.pop();
                	if(likes[cur] == mn_num && !op) // 가장 적은 횟수 + 가장 오래된 학생이면 업데이트
                	{
                		chk[cur] = 0;
            			likes[cur] = 0;
                		op = 1;
                		continue;
                	}
                	q.push(cur); // 아니라면 다시 큐에 업데이트
                }
                q.push(num);
                chk[num] = 1;
                likes[num]++;
            }
        }
    }
    for(int i=1; i<=100; i++)
    {
        if(chk[i]) // 만약 현재 사진틀에 존재하면 오름차순 출력
            cout << i << ' ';
    }
}