#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, val, sum = 0;
    cin >> n >> k;
    
    for(int i=0; i<k; i++)
    {
        cin >> val;
        sum += (val+1) / 2;
    }
    if(sum >= n)
        cout << "YES";
    else
        cout << "NO";
}