#include <bits/stdc++.h>

using namespace std;

int n1[100001];
int n2[100001];
int d[100001][3];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++)
            cin >> n1[i];
        for(int i=1; i<=n; i++)
        	cin >> n2[i];
        d[1][1] = n1[1];
        d[1][2] = n2[1];
        for(int i=2; i<=n; i++)
        {
            for(int j=1; j<=2; j++)
            {
                if(j==1)
                    d[i][j] = max(d[i-1][2], d[i-2][2])+n1[i];
                if(j==2)
                    d[i][j] = max(d[i-1][1], d[i-2][1])+n2[i];
            }
        }
        cout << max(d[n][1], d[n][2]) << '\n';
    }
    
}