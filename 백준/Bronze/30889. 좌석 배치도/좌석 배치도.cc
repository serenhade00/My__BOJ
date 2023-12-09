#include <bits/stdc++.h>

using namespace std;

char num[10][20];

int main(void)
{
    for(int i=0; i<10; i++)
    {
    	for(int j=0; j<20; j++)
    		num[i][j] = '.';
    }
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        num[s[0]-'A'][stoi(s.substr(1))-1] = 'o';
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<20; j++)
            cout << num[i][j];
        cout << '\n';
    }
}