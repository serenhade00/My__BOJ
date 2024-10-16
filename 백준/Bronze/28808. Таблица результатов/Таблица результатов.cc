#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, M, i, ans = 0;
    string s;

    cin >> N >> M;
    for (i = 0; i < N; i++)
    {
        cin >> s;
        for (char c : s)
            if (c == '+')
            {
                ans++;
                break;
            }
    }
    cout << ans;
}