#include <bits/stdc++.h>

using namespace std;

int num[1001];
map<int, int> m;
map<int, int> idx;

bool cmp(int a, int b)
{
    if(m[a] != m[b])
        return m[a] > m[b];
    return idx[a] < idx[b];
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, c;
    cin >> n >> c;
    
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        m[num[i]]++;
        if(!idx[num[i]])
        	idx[num[i]] = i+1;
    }
    
    sort(num, num+n, cmp);
	
	for(int i=0; i<n; i++)
		cout << num[i] << ' ';
}