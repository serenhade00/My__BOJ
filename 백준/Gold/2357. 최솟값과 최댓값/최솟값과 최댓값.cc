#include <bits/stdc++.h>
#define MAX numeric_limits<int>::max()
#define MIN 0

using namespace std;

vector<int> num;

struct RMQ{
    int n;
    vector<int> rangeMin, rangeMax;
    
    RMQ(const vector<int> &array)
    {
        n = array.size();
        rangeMin.resize(4*n), rangeMax.resize(4*n);
        init_min(array, 0, n-1, 1);
        init_max(array, 0, n-1, 1);
    }
    int init_min(const vector<int> &array, int left, int right, int node)
    {
        if(left==right)
            return rangeMin[node] = array[left];
        int mid = (left+right)/2;
        int nodeleft = init_min(array, left, mid, 2*node);
        int noderight = init_min(array, mid+1, right, 2*node+1);
        return rangeMin[node] = min(nodeleft, noderight);
    }
    int init_max(const vector<int> &array, int left, int right, int node)
    {
        if(left==right)
            return rangeMax[node] = array[left];
        int mid = (left+right)/2;
        int nodeleft = init_max(array, left, mid, 2*node);
        int noderight = init_max(array, mid+1, right, 2*node+1);
        return rangeMax[node] = max(nodeleft, noderight);
    }
    int query_min(int left, int right, int node, int nodeleft, int noderight)
    {
        if(right < nodeleft || noderight < left)
            return MAX;
        if(left <= nodeleft && noderight <= right)
            return rangeMin[node];
        int mid = (nodeleft+noderight)/2;
        return min(query_min(left, right, 2*node, nodeleft, mid),
                   query_min(left, right, 2*node+1, mid+1, noderight));
    }
    int query_max(int left, int right, int node, int nodeleft, int noderight)
    {
        if(right < nodeleft || noderight < left)
            return MIN;
        if(left <= nodeleft && noderight <= right)
            return rangeMax[node];
        int mid = (nodeleft+noderight)/2;
        return max(query_max(left, right, 2*node, nodeleft, mid),
                   query_max(left, right, 2*node+1, mid+1, noderight));
    }
    int query_min(int left, int right)
    {
        return query_min(left, right, 1, 0, n-1);
    }
    int query_max(int left, int right)
    {
        return query_max(left, right, 1, 0, n-1);
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, a, b, val;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
    	cin >> val;
    	num.push_back(val);
    }
    
    RMQ tree = RMQ(num);
    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        cout << tree.query_min(a-1, b-1) << ' ' << tree.query_max(a-1, b-1) << '\n';
    }
}