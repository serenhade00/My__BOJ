#include <bits/stdc++.h>

using namespace std;

int a[3];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    for(int i=0; i<3; i++)
        cin >> a[i];
    sort(a, a+3);
    string s;
    cin >> s;
    for(int i=0; i<3; i++)
        cout << a[s[i]-65] << ' ';
}