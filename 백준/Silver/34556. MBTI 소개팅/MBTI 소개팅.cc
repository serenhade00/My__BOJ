#include <bits/stdc++.h>

using namespace std;

string boys[11];
string girls[11];
int score[11][11];
bool is_matched[11];

int calc(int a, int b)
{
    int sum = 0;
    for(int i=0; i<4; i++)
    {
        if(boys[a][i] != girls[b][i])
            sum++;
    }
    return sum;
}

int solve(int n, int idx)
{
    if(idx == n)
        return 0;
    
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        if(!is_matched[i])
        {
            is_matched[i] = 1;
            int tmp = score[idx][i] + solve(n, idx+1);
            mx = max(mx, tmp);
            is_matched[i] = 0;  
        }   
    }
    return mx;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> boys[i];
    for(int i=0; i<n; i++)
        cin >> girls[i];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            score[i][j] = calc(i, j);
    }
    cout << solve(n, 0);
}