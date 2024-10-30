#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int N, i;
    bool able = false;

    cin >> N >> s;
    for (i = 0; i < N - 2; i++)
        if (s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o')
            able = true;
    if (able) cout << "Yes";
    else cout << "No";
}