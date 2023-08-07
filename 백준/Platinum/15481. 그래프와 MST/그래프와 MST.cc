#include <bits/stdc++.h>
#define X first
#define Y second
#define ll long long
using namespace std;

const int MAX = 200000;
const int DMAX = 18;
const int INF = 123456789;
typedef pair<int, int> pii;

int V, E;
// 점 A, 점 B 연결하는 Edge , 가중치는 W 
struct Edge {
    int A;
    int B;
    ll W;
    bool Used = false;
    Edge() :Edge(0, 0, 0) {}
    Edge(int a1, int b1, ll w1) : A(a1), B(b1), W(w1) {}
};

vector<Edge> Vec; // Edge 들 저장 
vector<Edge> tmp;
vector<int> p(MAX+1, -1); // union_find parent
vector<pii> graph[MAX + 1]; // graph[i] : i 의 자식노드 , 해당 가중치
int depth[MAX + 1]; // 노드 깊이
int parent[MAX + 1][DMAX + 1]; // parent[i][k] = i의 2^k 조상 
// biggest[i][k] : i의 2^k 조상으로 가는 길에 있는 가장 큰수 , 2번째로 큰수
// 가장 큰 수로 대체 했을 경우 최소 MST 와 같은 경우 방지  
ll biggest[MAX + 1][DMAX + 1];

bool cmp(const Edge& E1, const Edge& E2) {
    return E1.W < E2.W;
}

int find(int x)
{
    if(p[x] < 0)
        return x;
    return p[x] = find(p[x]);
}

void Union(int u, int v)
{
    u = find(u), v = find(v);
    if(u == v)
        return;
    p[v] = u;
}

void make_depth(int cur)
{
    for(auto nxt : graph[cur])
    {
        if(!depth[nxt.X])
        {
            depth[nxt.X] = depth[cur] + 1;
            parent[nxt.X][0] = cur;

            biggest[nxt.X][0] = nxt.Y;
            make_depth(nxt.X);
        }
    }
}

ll get_max(Edge e)
{
    int a = e.A, b = e.B, w = e.W;
    ll ret = -1;
    if(depth[a] < depth[b])
        swap(a, b);
    int diff = depth[a] - depth[b];
    int cnt = 0;
    while(diff) // 깊이 차이날때, 맞추는 과정
    {
        if(diff % 2)
        {
            if(biggest[a][cnt]) // 만약 0 이외에 갱신 값이 있으면 ret update
                ret = max(ret, biggest[a][cnt]);
            a = parent[a][cnt];
        }
        diff /= 2;
        cnt++;
    }
    if(a != b)
    {
        for(int i=DMAX; i>=0; i--)
        {
            if (parent[a][i] != parent[b][i]) // LCA까지의 간선 중 최댓값 update
            {
                if (biggest[a][i])
                    ret = max(ret, biggest[a][i]);
                if (biggest[b][i])
                    ret = max(ret, biggest[b][i]);

                a = parent[a][i];
                b = parent[b][i];
            }
        }
        if (biggest[a][0]) // LCA와 연결된 간선 확인
            ret = max(ret, biggest[a][0]);
        if (biggest[b][0])
            ret = max(ret, biggest[b][0]);
    }
    return ret;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> V >> E;
    for (int i = 0; i < E; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        Vec.push_back(Edge(a, b, w));
        tmp.push_back(Edge(a, b, w));
    }

    ll MST = 0; // MST 비용 
    int cnt = 0; // V-1 개의 Edge 나오면 MST 완성
    sort(Vec.begin(), Vec.end(), cmp); // 가중치 작은순 edge 정렬
    // MST
    for (int i = 0; i < E; i++) {
        int a = Vec[i].A;
        int b = Vec[i].B;
        ll cost = Vec[i].W;
        int aRoot = find(a);
        int bRoot = find(b);
        if (aRoot == bRoot) 
            continue;

        Union(a, b);
        MST += cost;
        Vec[i].Used = true;

        // 그래프 정보 저장  
        graph[a].push_back(pii(b, Vec[i].W));
        graph[b].push_back(pii(a, Vec[i].W));

        cnt++;
        if (cnt == V - 1) 
            break;
    }

    // LCA 구현, 1번 노드를 Root로 생각
    depth[1] = 1;
    // tree Depth 만들기
    make_depth(1);
    for(int k=0; k<=DMAX; k++) // biggest 갱신, i의 2^k+1번째 부모는 2^k번째 부모의 2^k번째 부모
    {
        for(int i=1; i<=V; i++)
        {
            int father = parent[i][k];
            if(father && parent[father][k])
            {
                ll w1, f1;
                w1 = biggest[i][k];
                f1 = biggest[father][k];
                if(w1 >= f1)
                    biggest[i][k+1] = w1;
                else
                    biggest[i][k+1] = f1;
                
                parent[i][k+1] = parent[father][k];
            }   
        }
    }
    ll Plus = INF;
    for (int i = 0; i < E; ++i) 
    {
        ll t = get_max(tmp[i]); // 대체 간선 중 minus할 최댓값
        Plus = tmp[i].W - t;
        cout << MST + Plus << '\n';
    }
}