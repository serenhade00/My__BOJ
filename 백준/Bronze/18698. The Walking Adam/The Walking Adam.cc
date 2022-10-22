#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
    	int cnt = 0;
        string s;
        cin >> s;
        
        int len = s.size();
        for(int j=0; j<len; j++)
        {
        	if(s[j] == 'D')
                break;
            cnt++;
        }
        cout << cnt << '\n';
    }
}