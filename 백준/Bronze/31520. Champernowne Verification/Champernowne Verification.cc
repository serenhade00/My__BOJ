#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    string s, s2;
    int i;
    cin >> s;
    for (i = 1; i <= 11; i++)
    {
        s2 += to_string(i);
        if (s == s2)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}