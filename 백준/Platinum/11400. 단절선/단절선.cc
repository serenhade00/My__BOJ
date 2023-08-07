#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100001];
int vis[100001];
int num = 1;
vector<pair<int,int>> ans;

int DFS(int cur, int prev)
{
	vis[cur] = num++;

	int ret = vis[cur]; // 올라갈 수 있는 최소 번호
	for(auto nxt : graph[cur])
	{
		if(nxt == prev) // 부모로 바로 가는 간선 제외
			continue;
		if(vis[nxt]) // 이미 방문한 경우
			ret = min(ret, vis[nxt]);
		else // 방문 x, 새로운 자식 컴포넌트
		{
			int ctree = DFS(nxt, cur); // 자식 통해 갈 수 있는 최소 번호
			if(ctree > vis[cur]) // 자식트리가 자신 위로 가지 못하면
				ans.push_back({min(cur, nxt), max(cur, nxt)});
			ret = min(ret, ctree); // 올라갈 수 있는 최소 번호 업데이트
		}
	}
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
	
	DFS(1, -1);
	
	cout << ans.size() << '\n';
	sort(ans.begin(), ans.end());
	for(auto cur : ans)
		cout << cur.first << ' ' << cur.second << '\n';
}