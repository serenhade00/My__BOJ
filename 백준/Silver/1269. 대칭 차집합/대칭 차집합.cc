#include <bits/stdc++.h>

using namespace std;

map<int,int> m;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int len1, len2, val;
    int cnt = 0;
    cin >> len1 >> len2;
    for(int i=0; i<len1; i++)
    {
        cin >> val;
        m[val]++;
    }
    for(int i=0; i<len2; i++)
    {
        cin >> val;
        m[val]++;
    }
    for(auto e : m)
    {
        if(e.second == 1)
            cnt++;
    }
    cout << cnt;
    
}