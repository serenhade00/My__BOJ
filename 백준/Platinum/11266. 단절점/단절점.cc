#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100001];
int vis[100001];
int num = 1;
set<int> ans;

int DFS(int cur, bool isRoot)
{
	vis[cur] = num++;

	int ret = vis[cur]; // 올라갈 수 있는 최소 번호
	int ccnt = 0; // 분리된 자식 컴포넌트 수
	for(auto nxt : graph[cur])
	{
		if(vis[nxt]) // 이미 방문한 경우
			ret = min(ret, vis[nxt]);
		else // 방문 x, 새로운 자식 컴포넌트
		{
			ccnt++;
			int ctree = DFS(nxt, false); // 자식 통해 갈 수 있는 최소 번호
			if(ctree >= vis[cur] && !isRoot) // 자신이 root가 아니고, 자식트리가 자신 위로 가지 못하면
				ans.insert(cur);
			ret = min(ret, ctree); // 올라갈 수 있는 최소 번호 업데이트
		}
	}
	if(isRoot && ccnt >= 2) // 자신이 root고, 자식트리가 2개 이상
		ans.insert(cur);
	return ret;
}

int main(void)
{
	int v, e, a, b;
	cin >> v >> e;

	for(int i=0; i<e; i++)
	{
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	for(int i=1; i<=v; i++)
	{
		if(!vis[i])
			DFS(i, true);
	}
	
	cout << ans.size() << '\n';
	for(auto cur : ans)
		cout << cur << ' ';
}