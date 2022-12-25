#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        multiset<int> ms;
        int n, num;
        char c;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> c >> num;
            if(c == 'I')
                ms.insert(num);
            else
            {
                if(ms.empty())
                    continue;
                if(num == 1)
                    ms.erase(prev(ms.end()));
                else
                    ms.erase(ms.begin());
            }   
        }
        if(ms.empty())
        {
        	cout << "EMPTY\n";
        	continue;
        }	
        cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
    }
}