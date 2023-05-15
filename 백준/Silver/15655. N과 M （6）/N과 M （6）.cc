#include <bits/stdc++.h>

using namespace std;

int num[51];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    sort(num, num+n);
    vector<int> v;
    
    for(int i=0; i<m; i++)
        v.push_back(0);
    for(int i=0; i<n-m; i++)
        v.push_back(1);
        
    do
    {
        for(int i=0; i<n; i++)
        {
            if(!v[i])
            	cout << num[i] << ' ';
        }
        cout << '\n';
    }while(next_permutation(v.begin(), v.end()));
}