#include <bits/stdc++.h>

using namespace std;

string idx[3001];
tuple<int,int,int> m[3001];
vector<int> graph[3001];
int indeg[3001];

void make_graph(int a, int b)
{
    int x1, y1, z1, x2, y2, z2, win = 0;
    tie(x1, y1, z1) = m[a];
    tie(x2, y2, z2) = m[b];
    x1 > x2 ? win++ : x1 < x2 ? win-- : win = win;
    y1 > y2 ? win++ : y1 < y2 ? win-- : win = win;
    z1 > z2 ? win++ : z1 < z2 ? win-- : win = win;
    if(win > 0)
    {
        graph[a].push_back(b);
        indeg[b]++;
    }
    else if(win < 0)
    {
        graph[b].push_back(a);
        indeg[a]++;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, a, b, c;
    string s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s >> a >> b >> c;
        m[i] = make_tuple(a, b, c);
        idx[i] = s;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
            make_graph(i, j);
    }
    vector<string> tmp;
    vector<string> answer;
    queue<int> q;
    for(int i=0; i<n; i++)
    {
        if(!indeg[i])
        {
            q.push(i);
            answer.push_back(idx[i]);
        }
    }
    while(!q.empty())
    {
        auto cur = q.front(); q.pop();
        tmp.push_back(idx[cur]);
        for(auto nxt : graph[cur])
        {
            indeg[nxt]--;
            if(!indeg[nxt])
                q.push(nxt);
        }
    }
    sort(tmp.begin(), tmp.end());
    if(tmp.size() != n)
        cout << "Paradoxe Absurdo";
    else
    {
        sort(answer.begin(), answer.end());
        for(auto e : answer)
            cout << e << '\n';
    }
}