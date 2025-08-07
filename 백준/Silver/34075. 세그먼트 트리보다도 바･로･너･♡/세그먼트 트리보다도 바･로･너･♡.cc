#include <bits/stdc++.h>

using namespace std;

map<string, int> algo;
map<string, int> team;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, q, val;
    string s, cur;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s >> val;
        algo[s] = val;
    }
    cin >> m;
    for(int i=0; i<m; i++)
    {
        cin >> s >> val;
        team[s] = val;
    }
    cin >> q;
    cin.ignore();
    for(int i=0; i<q; i++)
    {
        string qu;
        getline(cin, qu);
        if(qu.back() == '!')
        {
            cur = qu.substr(0, qu.find(" "));
            cout << "hai!\n";
        }
        else
        {
        	int gap = 31;
        	string one, two;
        	for(auto e : algo)
        	{
        		if(abs(e.second - team[cur]) < gap)
        		{
        			one = e.first;
        			gap = abs(e.second - team[cur]);
        		}
        	}
        	gap = 31;
        	for(auto e : algo)
        	{
        		if(e.first == one)
        			continue;
        		if(abs(e.second - team[cur]) < gap)
        		{
        			two = e.first;
        			gap = abs(e.second - team[cur]);
        		}
        	}
        	cout << two << " yori mo " << one << '\n';
        }
    }
}