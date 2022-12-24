#include <bits/stdc++.h>

using namespace std;

int phy[200001];
int info[200001];
int math[200001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> phy[i];
    for(int i=0; i<n; i++)
        cin >> info[i];
    for(int i=0; i<n; i++)
        cin >> math[i];
    
    int cur = -1;
    
    for(int i=0; i<n; i++)
    {
        int mn = min({phy[i], info[i], math[i]});
        int mx = max({phy[i], info[i], math[i]});
        if(mn > cur)
            cur = mn;
        else if(mn <= cur && cur < mx)
            cur = cur+1;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}