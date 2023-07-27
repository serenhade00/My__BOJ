#include <bits/stdc++.h>

using namespace std;

vector<long long> num;

struct RSQ{
    int n;
    vector<long long> rangeSum;
    vector<long long> lazy;
    
    RSQ(const vector<long long> &array)
    {
        n = array.size();
        rangeSum.resize(4*n);
        lazy.resize(4*n);
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
    void update_lazy(int node, int nodeleft, int noderight)
    {
        if(lazy[node] != 0)
        {
            rangeSum[node] += lazy[node]*(noderight-nodeleft+1);
            if(nodeleft != noderight)
            {
                lazy[2*node] += lazy[node];
                lazy[2*node+1] += lazy[node];
            }
        }
        lazy[node] = 0;
    }
    long long update_range(int left, int right, long long val, int node, int nodeleft, int noderight)
    {
        update_lazy(node, nodeleft, noderight);
        if(noderight < left || nodeleft > right)
            return rangeSum[node];
        if(left <= nodeleft && noderight <= right)
        {
            rangeSum[node] += val*(noderight-nodeleft+1);
            if(nodeleft != noderight)
            {
                lazy[2*node] += val;
                lazy[2*node+1] += val;
            }
            return rangeSum[node];
        }
        int mid = (nodeleft+noderight)/2;
        return rangeSum[node] = update_range(left, right, val, 2*node, nodeleft, mid) + 
                                update_range(left, right, val, 2*node+1, mid+1, noderight);
    }
    long long query(int left, int right, int node, int nodeleft, int noderight)
    {
        update_lazy(node, nodeleft, noderight);
        if(noderight < left || nodeleft > right)
            return 0;
        if(left <= nodeleft && noderight <= right)
            return rangeSum[node];
        int mid = (nodeleft+noderight)/2;
        return query(left, right, 2*node, nodeleft, mid) +
               query(left, right, 2*node+1, mid+1, noderight);
    }
    long long update(int left, int right, long long val)
    {
        return update_range(left, right, val, 1, 0, n-1);
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
    long long val, q, a, b, c;
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
        cin >> q;
        if(q == 1)
        {
            cin >> a >> b >> c;
            tree.update(a-1, b-1, c);
        }
        else
        {
            cin >> a >> b;
            cout << tree.query(a-1, b-1) << '\n';
        }
        
    }
}