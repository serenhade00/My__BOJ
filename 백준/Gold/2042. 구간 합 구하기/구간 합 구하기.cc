#include <bits/stdc++.h>

using namespace std;

vector<long long> num;

struct RSQ{
    int n;
    vector<long long> rangeSum;
    
    RSQ(const vector<long long> &array)
    {
        n = array.size();
        rangeSum.resize(4*n);
        init(array, 1, 0, n-1); 
    }
    long long init(const vector<long long> &array, int node, int left, int right)
    {
        if(left == right)
            return rangeSum[node] = array[left];
        int mid = (left+right)/2;
        long long nodeleft = init(array, 2*node, left, mid);
        long long noderight = init(array, 2*node+1, mid+1, right);
        return rangeSum[node] = nodeleft + noderight;
    }
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
    long long update(int idx, long long val)
    {
        return update(idx, val, 1, 0, n-1);
    }
    long long query(int left, int right)
    {
        return query(left, right, 1, 0, n-1);
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k;
    long long val, q, a, b;
    cin >> n >> m >> k;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        num.push_back(val);
    }
    int sum = m+k;
    RSQ tree = RSQ(num);
    for(int i=0; i<sum; i++)
    {
        cin >> q >> a >> b;
        if(q == 1)
            tree.update(a-1, b);
        else
        	cout << tree.query(a-1, b-1) << '\n';
    }
}