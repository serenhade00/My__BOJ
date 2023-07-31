#include <bits/stdc++.h>

using namespace std;

unordered_set<string> us;
int num[11];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    sort(num, num+n);
    
    do{
        string tmp;
        for(int i=0; i<k; i++)
            tmp += to_string(num[i]);
        
        if(us.find(tmp) != us.end())
            continue;
        us.insert(tmp);
    }while(next_permutation(num, num+n));
    cout << us.size();
}