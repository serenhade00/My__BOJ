#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    int val;
    int sum = 0;
    vector<int> v1;
    vector<int> v2;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> val;
        if(val > 0)
            v1.push_back(val);
        else
            v2.push_back(abs(val));
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int pos_max = 0, neg_max = 0;
    int st = v1.size();
    if(st)
    {
    	for(int i=st-1; i>=0; i-=m)
        	sum += 2*v1[i];
        pos_max = v1[v1.size()-1];
    }
    
    st = v2.size();
    if(st)
    {
    	for(int i=st-1; i>=0; i-=m)
        	sum += 2*v2[i];
        neg_max = v2[v2.size()-1];
    }
    
    
    sum -= max(pos_max, neg_max);
      
    cout << sum;
}