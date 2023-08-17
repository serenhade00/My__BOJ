#include <bits/stdc++.h>
#define MAX numeric_limits<int>::max()

using namespace std;

vector<int> num; // 처음 입력 배열, RMQ에서 array로 사용

struct RMQ
{
    int n; // 배열의 길이
    vector<int> rangeMin; // 각 구간 최소치(1번 노드 = 0~n-1, 2*i노드, 2*i+1 노드...)
    RMQ(const vector<int>& array)
    {
        n = array.size();
        rangeMin.resize(n*4);
        init(array, 0, n-1, 1);
    }
    // node가 array[left, right] 표현시, node를 루트로 하는 서브트리 초기화, 이 구간 최소치 반환
    // array는 처음에 입력받은 배열 (값 순서대로 나열)
    int init(const vector<int>& array, int left, int right, int node)
    {
        if(left == right)
            return rangeMin[node] = array[left];
        int mid = (left+right)/2;
        int nodeleft = init(array, left, mid, 2*node);
        int noderight = init(array, mid+1, right, 2*node+1);
        return rangeMin[node] = min(nodeleft, noderight);
    }
    int update(int idx, int val, int node, int nodeleft, int noderight)
    {
        if(nodeleft > idx || noderight < idx) // node 표현 범위가 원하는 구간과 교집합 x
            return rangeMin[node];
        if(nodeleft == noderight)
            return rangeMin[node] = val;
        int mid = (nodeleft+noderight)/2;
        return rangeMin[node] = min(update(idx, val, 2*node, nodeleft, mid), 
                                update(idx, val, 2*node+1, mid+1, noderight));
    }
    // node 표현 범위 array[nodeleft, noderight]일 때, 이 범위와 array[left, right] 교집합 최소치 반환
    int query(int left, int right, int node, int nodeleft, int noderight)
    {
        if(right < nodeleft || noderight < left) // node 표현 범위가 원하는 구간과 교집합 x
            return INT_MAX;
        if(left <= nodeleft && noderight <= right) // node 표현 범위가 원하는 구간에 완전히 포함될 때
            return rangeMin[node];
        int mid = (nodeleft+noderight)/2;
        return min(query(left, right, 2*node, nodeleft, mid), 
                   query(left, right, 2*node+1, mid+1, noderight));
    }
    int update(int idx, int val)
    {
        return update(idx, val, 1, 0, n-1);
    }
    int query(int left, int right)
    {
        return query(left, right, 1, 0, n-1);
    }
};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, val, op, a, b;
    cin >> n;
    for(int i=0; i<n; i++)
    {
    	cin >> val;
    	num.push_back(val);
    }
    
    RMQ tree = RMQ(num);
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> op >> a >> b;
        if(op == 1)
            tree.update(a-1, b);
        else
            cout << tree.query(a-1, b-1) << '\n';
    }
}