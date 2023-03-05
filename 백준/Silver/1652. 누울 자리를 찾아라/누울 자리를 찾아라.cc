#include <bits/stdc++.h>

using namespace std;

string graph[101];

void lay_down(int n)
{
    int h = 0, v = 0;
    for(int i=0; i<n; i++)
    {
        int h_cnt = 0, v_cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(graph[i][j] == '.')
                h_cnt++;
            if(graph[i][j] == 'X' || j == n-1)
            {
                if(h_cnt >= 2)
                    h++;
                h_cnt = 0;
            }
            
            if(graph[j][i] == '.')
                v_cnt++;
            if(graph[j][i] == 'X' || j == n-1)
            {
                if(v_cnt >= 2)
                    v++;
                v_cnt = 0;
            }
        }
    }
    cout << h << ' ' << v;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> graph[i];

    lay_down(n);
}