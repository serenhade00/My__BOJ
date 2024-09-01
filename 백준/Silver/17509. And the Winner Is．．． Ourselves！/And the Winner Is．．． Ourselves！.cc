#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int ans = 0, sum = 0;
    pair<int,int> a[11];
    for(int i=0; i<11; i++)
    	cin >> a[i].first >> a[i].second;
    sort(a, a+11);

    for(int i=0; i<11; i++)
    {
    	sum += a[i].first;
    	ans += sum + a[i].second*20;
    }
    cout << ans;
}