#include <bits/stdc++.h>

using namespace std;

string graph[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int r, c;
    cin >> r >> c;
    for(int i=0; i<r; i++)
        cin >> graph[i];
    for(int i=0; i<r; i++)
    {
        int cur = -1;
        for(int j=0; j<c; j++)
        {
            if(graph[i][j] == '.')
            {
                if(cur == -1)
                    cout << -1 << ' ';
                else
                    cout << j-cur << ' ';
            }
            else
            {
            	cout << 0 << ' ';
            	cur = j;
            }
        }
        cout << '\n';
    }
}