#include <bits/stdc++.h>

using namespace std;

int num[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i=0; i<2*n; i++)
    {
        cin >> val;
        num[val]++;
    }
    for(int i=1; i<=2*n; i++)
    {
        if(num[i] > 2)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}