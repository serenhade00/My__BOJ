#include <bits/stdc++.h>

using namespace std;

pair<int,int> jewel[300001];
multiset<int> bag;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, tmp;
    long long sum = 0;
    int val;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> jewel[i].second >> jewel[i].first;
    for(int i=0; i<k; i++)
    {
        cin >> val;
        bag.insert(val);
    }
    sort(jewel, jewel+n);
	multiset<int>::iterator it;
    for(int i=n-1; i>=0; i--)
    {
    	if(bag.empty())
    		break;
        tmp = jewel[i].second;
        it = bag.lower_bound(tmp);
        if(it == bag.end())
        	continue;
        sum += jewel[i].first;
        bag.erase(it);
    }
    cout << sum;
}