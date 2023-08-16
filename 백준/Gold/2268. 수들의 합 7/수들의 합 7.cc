#include <bits/stdc++.h>

using namespace std;

vector<long long> rangeSum(4000001);

long long update(int idx, long long val, int node, int nodeleft, int noderight)
{
    if(noderight < idx || nodeleft > idx)
        return rangeSum[node];
    if(nodeleft == noderight)
        return rangeSum[node] = val;

    int mid = (nodeleft+noderight)/2;
    return rangeSum[node] = update(idx, val, 2*node, nodeleft, mid) + 
        update(idx, val, 2*node+1, mid+1, noderight);
}
long long query(int left, int right, int node, int nodeleft, int noderight)
{
    if(noderight < left || nodeleft > right)
        return 0;
    if(left <= nodeleft && noderight <= right)
        return rangeSum[node];
    int mid = (nodeleft+noderight)/2;
    return query(left, right, 2*node, nodeleft, mid) +
        query(left, right, 2*node+1, mid+1, noderight);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, op, a, b;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        cin >> op >> a >> b;
        if(!op)
        {
            if(a > b)
                swap(a, b);
            cout << query(a-1, b-1, 1, 0, n-1) << '\n';
        }
        else
            update(a-1, b, 1, 0, n-1);
    }
}