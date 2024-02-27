#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    while(1)
    {
        cin >> t;
        if(t == -1)
        	break;
        vector<int> v;
        int sum = 0;
        for(int i=1; i<=t-1; i++)
        {
            if(t % i == 0)
            {
                sum += i;
                v.push_back(i);
            }
        }
        if(sum == t)
        {
            cout << t << " = ";
            for(auto e : v)
            {
                cout << e;
                if(e*2 == t)
                    break;
                cout << " + ";
            }
            cout << '\n';
        }
        else
            cout << t << " is NOT perfect.\n";
    }
}