#include <iostream>
#include <string>
using namespace std;

int vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    return -1;
}

int main(void)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int sum = 0;
        string s;
        cin >> s;
        for (char c : s)
            sum += vowel(c);
        if (sum > 0) cout << s << "\n1\n";
        else cout << s << "\n0\n";
    }
}