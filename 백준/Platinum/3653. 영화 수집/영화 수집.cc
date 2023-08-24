#include <bits/stdc++.h>

using namespace std;

int idx[200005];
vector<int> num;

struct RSQ{
    int n;
    vector<int> rangeSum;
    
    RSQ(const vector<int> &array)
    {
        n = array.size();
        rangeSum.resize(4*n);
        init(array, 1, 0, n-1); 
    }
    int init(const vector<int> &array, int node, int left, int right)
    {
        if(left == right)
            return rangeSum[node] = array[left];
        int mid = (left+right)/2;
        int nodeleft = init(array, 2*node, left, mid);
        int noderight = init(array, 2*node+1, mid+1, right);
        return rangeSum[node] = nodeleft + noderight;
    }
    int update(int idx, int val, int node, int nodeleft, int noderight)
    {
        if(noderight < idx || nodeleft > idx)
            return rangeSum[node];
        if(nodeleft == noderight)
        	return rangeSum[node] = val;

        int mid = (nodeleft+noderight)/2;
        return rangeSum[node] = update(idx, val, 2*node, nodeleft, mid) + 
                                update(idx, val, 2*node+1, mid+1, noderight);
    }
    int query(int left, int right, int node, int nodeleft, int noderight)
    {
        if(noderight < left || nodeleft > right)
            return 0;
        if(left <= nodeleft && noderight <= right)
            return rangeSum[node];
        int mid = (nodeleft+noderight)/2;
        return query(left, right, 2*node, nodeleft, mid) +
               query(left, right, 2*node+1, mid+1, noderight);
    }
    int get_node(int x)
    {
    	return rangeSum[x];
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k, val;
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        num.resize(n+m);
        for(int i=0; i<n+m; i++)
            num[i] = 0;
        for(int i=0; i<n; i++)
        {
            num[i] = 1;
            idx[i+1] = n-1-i;
        }
        RSQ tree = RSQ(num);
        for(int j=0; j<m; j++)
        {
            cin >> val;
            cout << tree.query(idx[val]+1, n+1+j, 1, 0, n+m-1) << ' ';
            tree.update(idx[val], 0, 1, 0, n+m-1);
            idx[val] = n+j;
            tree.update(idx[val], 1, 1, 0, n+m-1);
        }
        cout << '\n';
    }
}