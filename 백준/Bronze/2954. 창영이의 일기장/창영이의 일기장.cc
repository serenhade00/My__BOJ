#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    string s;
    int len, i;
    getline(cin, s);
    len = s.length();
    for (i = 0; i < len; i++)
    {
        cout << s[i];
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') i += 2;
    }
}