#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int cnt = 0;
    for(int i=1; i<=5; i++)
    {
        string s;
        cin >> s;
        
        if(s.find("FBI") != string::npos)
        {
            cout << i << ' ';
            cnt++;
        }
    }
    if(!cnt)
        cout << "HE GOT AWAY!";
        
}