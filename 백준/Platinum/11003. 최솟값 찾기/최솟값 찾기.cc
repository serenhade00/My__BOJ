#include <bits/stdc++.h>

using namespace std;

deque<pair<int,int>> dq; 
int num[5000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, l, val;
    cin >> n >> l;
    
    for(int i=1; i<=n; i++)
        cin >> num[i];
    
    for(int i=1; i<=n; i++)
    {
        if(!dq.empty())
        {
            if(dq.front().second < i-l+1)
                dq.pop_front();
        }
        while(!dq.empty() && dq.back().first > num[i])
            dq.pop_back();
        dq.push_back({num[i], i});
        cout << dq.front().first << ' ';
    }
}