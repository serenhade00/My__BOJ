#include <bits/stdc++.h>

using namespace std;

int num[1000001];
int idx[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> lcs;
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            lcs.push_back(num[i]);
            idx[0] = 1;
        }
        if(lcs.back() < num[i])
        {
            lcs.push_back(num[i]);
            idx[i] = lcs.size();
        }
        else
        {
            auto it = lower_bound(lcs.begin(), lcs.end(), num[i]);
            *it = num[i];
            idx[i] = it-lcs.begin()+1;
        }
    }
    cout << lcs.size() << '\n';
    
    int mx = lcs.size();
    deque<int> ans;
    for(int i=n-1; i>=0; i--)
    {
        if(mx == 0)
            break;
        if(idx[i] == mx)
        {
            ans.push_front(num[i]);
            mx--;
        }
    }
    for(auto v : ans)
        cout << v << ' ';
}