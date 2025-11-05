#include <bits/stdc++.h>
#define X first
#define Y second
#define MAX 10001
#define pii pair<int, int>

using namespace std;

int n, m, ho_cnt, ch_cnt, mn = MAX;
int graph[51][51];
int dist[101];
bool is_used[15];

vector<pii> house, chicken;
vector<pii> chicken2;

int calc()
{
    int tmp = 0;
    fill(dist, dist+ho_cnt, MAX);
    for(int i=0; i<ho_cnt; i++)
    {
        for(int j=0; j<m; j++)
        	dist[i] = min(dist[i], abs(house[i].X - chicken2[j].X) + abs(house[i].Y - chicken2[j].Y));
        tmp += dist[i];
    }
    return tmp;
}

void solve(int idx, int cnt)
{
    if(cnt == m)
    {
    	mn = min(mn, calc());
    	return;
    }
    for(int i=idx; i<ch_cnt; i++)
    {
        if(!is_used[i])
        {
            is_used[i] = 1;
            chicken2.push_back({chicken[i].X, chicken[i].Y});
            solve(i+1, cnt+1);
            chicken2.pop_back();
            is_used[i] = 0;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 1)
                house.push_back({i, j});
            else if(graph[i][j] == 2)
            {
                chicken.push_back({i, j});
                graph[i][j] = 0;
            }
        }
    }
    ho_cnt = house.size();
    ch_cnt = chicken.size();
    solve(0, 0);
    cout << mn;
}