#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N, i;
    string s;
    cin >> N >> s;
    for (i = 0; i < N * 2 - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}