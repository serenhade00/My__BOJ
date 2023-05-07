#include <bits/stdc++.h>

using namespace std;

int graph[101][101];

int main(void)
{
    int n, m, val;
    cin >> n >> m;
    
    for(int k=0; k<2; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> val;
                graph[i][j] += val;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cout << graph[i][j] << ' ';
        cout << '\n';
    }
}