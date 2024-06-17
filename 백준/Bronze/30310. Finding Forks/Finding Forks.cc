#include <bits/stdc++.h>

using namespace std;

int num[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
        cin >> num[i];
    sort(num, num+t);
    cout << num[0] + num[1];
}