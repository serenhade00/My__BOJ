#include <bits/stdc++.h>

using namespace std;

int num[1000001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    vector<int> lcs;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(i==0)
            lcs.push_back(val);
        if(lcs.back() < val)
            lcs.push_back(val);
        else
        {
            auto it = lower_bound(lcs.begin(), lcs.end(), val);
            *it = val;
        }
    }
    cout << lcs.size();
}