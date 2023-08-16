#include <bits/stdc++.h>

using namespace std;

pair<int,int> num[500001];
int ans[500001];
vector<int> rangeSum(2000000);

int update(int idx, int left, int right, int node)
{
	if(right < idx || left > idx)
        return rangeSum[node];
    if(left == right)
    {
        rangeSum[node]++;
        return rangeSum[node];
    }
    int mid = (left+right)/2;
    return rangeSum[node] = update(idx, left, mid, 2*node) +
                            update(idx, mid+1, right, 2*node+1);
}

int query(int idx, int left, int right, int node)
{
	if(left >= idx)
        return 0;
    if(right < idx)
        return rangeSum[node];
    if(left == right)
        return rangeSum[node];
    
    int mid = (left+right)/2;
    return query(idx, left, mid, 2*node) +
           query(idx, mid+1, right, 2*node+1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        num[i].first = val, num[i].second = i;
    }
    
    sort(num, num+n);
    for(int i=n-1; i>=0; i--)
    {
        ans[num[i].second] = query(num[i].second, 0, n-1, 1) + 1;
        update(num[i].second, 0, n-1, 1);
    }
    for(int i=0; i<n; i++)
        cout << ans[i] << '\n';
}