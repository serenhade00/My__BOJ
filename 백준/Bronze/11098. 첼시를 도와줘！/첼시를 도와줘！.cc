#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> p;
        vector <int> cost(p);
        vector <string> name(p);
        int mx = 0;
        string max_name;

        for(int j=0;j<p;j++)
        {
            cin >> cost[j] >> name[j];

            if(mx < cost[j])
            {
                mx = cost[j];
                max_name = name[j];
            }
        }
        cout << max_name << "\n";
    }
}