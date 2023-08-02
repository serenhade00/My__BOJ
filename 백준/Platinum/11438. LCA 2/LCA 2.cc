#include <bits/stdc++.h>
#define MAX 20
using namespace std;

vector<int> graph[100001]; 
int parent[100001][21]; // parent[i][j] = 노드 i의 2^j 번째 부모 노드 기록
int depth[100001]; // 깊이. 루트가 0으로 시작.

void traverse(int cur)
{
    for(auto nxt : graph[cur]) // 깊이 및 부모 노드(바로 위) 기록
    {
        if(depth[nxt] == -1)
        {
            depth[nxt] = depth[cur]+1;
            parent[nxt][0] = cur;
            traverse(nxt);
        }
    }
}
void make_parent(int n)
{
    for(int j=0; j<MAX-1; j++)  // 2^j 위 부모 노드를 노드 마다 갱신(1~n). 모든 부모 노드 숫자를 저장 x.
    {
        for(int i=1; i<=n; i++)
        {
            int k = parent[i][j]; // i의 2^j번째 부모 노드 = k. i의 2^j*2번째 부모 노드 = k의 2^j번째 부모 노드.
            if(k != -1)
                parent[i][j+1] = parent[k][j];
        }
    }
}

void solve(int u, int v)
{
    if(depth[u] < depth[v]) // 깊은걸 u로 설정정
        swap(u, v);
    
    int diff = depth[u] - depth[v];
    int j = 0;
    while(diff) // u와 v 레벨 맞추는 과정
    {
        if(diff % 2)
            u = parent[u][j];
        diff /= 2;
        j++;
    }
    if(u == v) // 레벨 맞췄을 때 같은 노드면
    {
        cout << u << '\n';
        return;
    }
    for(int j=MAX-1; j>=0; j--) // ex) LCA=13번째 부모 노드 = 2^4(겹침)~2^3(다름)사이에 존재. = 2^3+2^2+2^0. 즉 다르면 2^j 부모 노드수를  더해나감감.
    {
        if(parent[u][j] != parent[v][j])
        {
            u = parent[u][j];
            v = parent[v][j];
        }
    }
    cout << parent[u][0] << '\n';
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, a, b;
    cin >> n;
    
    for(int i=0; i<n-1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    memset(parent, -1, sizeof(parent));
    fill(depth+1, depth+n+1, -1);
    
    depth[1] = 0;    
    traverse(1);
    make_parent(n);
    
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        solve(a, b);
    }
}