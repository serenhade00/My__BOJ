#include <bits/stdc++.h>

using namespace std;

vector<int> num;

struct RSQ{
    int n = 1000000;
    vector<int> rangeSum;
    
    RSQ(const vector<int> &array)
    {
        rangeSum.resize(4*n);
    }
    int update(int idx, int value, int node, int nodeL, int nodeR)
    {
        if(nodeL > idx || nodeR < idx)
            return rangeSum[node];
        if(nodeL == nodeR)
            return rangeSum[node] += value;
        int mid = (nodeL+nodeR)/2;
        return rangeSum[node] = update(idx, value, 2*node, nodeL, mid) +
                                update(idx, value, 2*node+1, mid+1, nodeR);
    }
    int query(int rank, int node, int nodeL, int nodeR)
    {
        if(nodeL == nodeR)
            return nodeL;
        int mid = (nodeL+nodeR)/2;
        if(rangeSum[2*node] >= rank)
            return query(rank, 2*node, nodeL, mid);
        else
            return query(rank-rangeSum[2*node], 2*node+1, mid+1, nodeR);
    }
    int update(int idx, int value)
    {
        return update(idx, value, 1, 1, n);
    }
    int query(int rank)
    {
        return query(rank, 1, 1, n);
    }
    int sum(int node)
    {
    	return rangeSum[node];
    }
};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, com, a, b;
    cin >> n;
    
    RSQ tree = RSQ(num);
    
    for(int i=0; i<n; i++)
    {
        cin >> com;
        if(com == 1)
        {
            cin >> b;
            int tmp_rank = tree.query(b);
            tree.update(tmp_rank, -1);
            cout << tmp_rank << '\n';
        }
        else
        {
            cin >> a >> b;
            tree.update(a, b);
        }
    }
}