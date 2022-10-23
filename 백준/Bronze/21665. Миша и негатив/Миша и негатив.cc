#include <iostream>

using namespace std;

string s[101];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i<n; i++)
        cin >> s[i];
    
    string tmp;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        cin >> tmp;
        for(int j=0; j<m; j++)
        {
            if(s[i][j] == tmp[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}