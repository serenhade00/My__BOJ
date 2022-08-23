#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    double num, mx = 0;
    vector<double> v;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    mx = *max_element(v.begin(), v.end());
    for(int i=1; i<n; i++)
    {
        double tmp = v[i];
        for(int j=i-1; j>=0; j--)
        {
            if(tmp*v[j] > mx)
            {
                mx = tmp*v[j];
            }
            tmp *= v[j];
        }
    }
    cout << fixed;
    cout.precision(3);
    cout << mx;
        
}