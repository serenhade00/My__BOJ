#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    deque<int> dq;
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
        dq.push_back(i);
    
    while(!dq.empty())
    {
        int cur = dq.front();
        dq.pop_front();
        cout << cur << ' ';
        
        if(dq.empty())
            break;
        int tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
    }
    
    
}