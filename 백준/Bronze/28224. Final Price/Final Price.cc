#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, val, sum = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        sum += val;
    }
    cout << sum;
}