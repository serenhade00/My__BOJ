#include <bits/stdc++.h>

using namespace std;

pair<int,int> score[8];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<8; i++)
    {
        cin >> score[i].first;
        score[i].second = i+1;
    }
    
    sort(score, score+8);
    
    int sum = 0;
    vector<int> v;
    
    for(int i=3; i<8; i++)
    {
    	sum += score[i].first;
    	v.push_back(score[i].second);
    }

	sort(v.begin(), v.end());
	
    cout << sum << '\n';
    for(auto e : v)
		cout << e << ' ';
}