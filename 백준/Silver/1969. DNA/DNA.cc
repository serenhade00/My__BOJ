#include <bits/stdc++.h>

using namespace std;

int freq[4][51];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    string s;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        for(int j=0; j<m; j++)
        {
            if(s[j]=='A')
                freq[0][j]++;
            else if(s[j]=='C')
                freq[1][j]++;
            if(s[j]=='G')
                freq[2][j]++;
            if(s[j]=='T')
                freq[3][j]++;
        }
    }
    vector<char> v;
    int sum = 0;
    for(int i=0; i<m; i++)
    {
        int mx = freq[0][i];
        int mx_idx = 0;
        for(int j=1; j<4; j++)
        {
            if(freq[j][i] > mx)
            {
                mx = freq[j][i];
                mx_idx = j;
            }
        }
        if(mx_idx == 0)
            v.push_back('A');
        else if(mx_idx == 1)
            v.push_back('C');
        if(mx_idx == 2)
            v.push_back('G');
        if(mx_idx == 3)
            v.push_back('T');
        sum += n-mx;
    }
    for(auto e : v)
        cout << e;
    cout << '\n' << sum;
}