#include <bits/stdc++.h>

using namespace std;

int num[100001];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, l, r;
    cin >> n >> l >> r;
    for(int i=0; i<n; i++)
        cin >> num[i];
    sort(num+l-1, num+r);
    if(is_sorted(num, num+n))
        cout << 1;
    else
        cout << 0;
}