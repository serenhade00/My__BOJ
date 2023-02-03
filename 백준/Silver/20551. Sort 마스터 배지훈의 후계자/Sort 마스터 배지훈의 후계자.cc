#include <bits/stdc++.h>

using namespace std;

vector<int> num;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
    	cin >> val;
    	num.push_back(val);
    }
    
    sort(num.begin(), num.end());
    for(int i=0; i<m; i++)
    {
        cin >> val;
        if(binary_search(num.begin(), num.end(), val))
            cout << lower_bound(num.begin(), num.end(), val)-num.begin() << '\n';
        else
            cout << -1 << '\n';
    }
}