#include <bits/stdc++.h>

using namespace std;

int num[200001];
bool idx[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, len, tmp;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        idx[num[i]] = 1;
    }
    len = 2*n;
    for(int i=1; i<=len; i++)
    {
        cin >> tmp;
        if(i<=n)
        {
            if(tmp != num[i-1])
            {
                cout << "NO";
                return 0;
            }
        }
        else
        {
            if(!idx[tmp])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}