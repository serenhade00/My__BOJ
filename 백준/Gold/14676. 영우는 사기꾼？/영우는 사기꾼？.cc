#include <bits/stdc++.h>

using namespace std;

vector<int> graph[100001];
int indeg[100001];
int cnt[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    queue<int> q;
    int n, m, k, a, b;
    cin >> n >> m >> k;
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        indeg[b]++;
    }
    for(int i=0; i<k; i++)
    {
        cin >> a >> b;
        if(a == 1)
        {
            if(!indeg[b])
            {
                if(!cnt[b])
                {
                    for(auto nxt : graph[b])
                    {
                        if(indeg[nxt])
                            indeg[nxt]--;
                    }
                }
                cnt[b]++;
            }
            else
            {
                cout << "Lier!";
                return 0;
            }
        }
        else
        {
            if(cnt[b] <= 0)
            {
                cout << "Lier!";
                return 0;
            }
            if(cnt[b] == 1)
            {
                for(auto nxt : graph[b])
                {
                    indeg[nxt]++;
                }
            }
            cnt[b]--;
        }
    }
    cout << "King-God-Emperor";
}