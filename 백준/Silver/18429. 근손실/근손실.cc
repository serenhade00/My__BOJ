#include <bits/stdc++.h>

using namespace std;

int n, k, ans;
int sum = 500;
bool is_used[8];
int num[8];

void backtrack(int cnt)
{
    if(cnt == n)
    {
        ans++;
        return;
    }
        
    for(int i=0; i<n; i++)
    {
        if(!is_used[i] && (sum+num[i]-k >= 500))
        {
            sum += num[i]-k;
            is_used[i] = 1;
            backtrack(cnt+1);
            is_used[i] = 0;
            sum -= num[i]-k;
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    backtrack(0);
    cout << ans;
}