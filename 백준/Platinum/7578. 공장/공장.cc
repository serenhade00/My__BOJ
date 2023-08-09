#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<ll> a;
ll b[1000001];

struct RSQ{
    int n;
    vector<ll> rangeSum;
    
    RSQ(const vector<ll> &array)
    {
        n = array.size();
        rangeSum.resize(4*n);
    }
    ll update(int idx, int left, int right, int node)
    {
        if(idx < left || idx > right)
            return rangeSum[node];
        if(left == right)
        	return rangeSum[node] = 1;
        else
        {
            int mid = (left+right)/2;
            return rangeSum[node] = update(idx, left, mid, 2*node) 
                                    + update(idx, mid+1, right, 2*node+1);
        }
    }
    ll query(int en, int left, int right, int node)
    {
        if(right <= en)
            return 0;
        if(left > en)
            return rangeSum[node];
        int mid = (left+right)/2;
        return query(en, left, mid, 2*node) + query(en, mid+1, right, 2*node+1);
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, val;
    cin >> n;
    for(int i=0; i<n; i++)
    {
    	cin >> val;
    	a.push_back(val);
    }
    for(int i=0; i<n; i++)
    {
        cin >> val;
        b[val] = i;
    }
    RSQ tree = RSQ(a);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += tree.query(b[a[i]], 0, n-1, 1);
        tree.update(b[a[i]], 0, n-1, 1);
    }
    cout << sum;
}