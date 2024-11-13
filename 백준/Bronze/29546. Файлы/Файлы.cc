#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, Q, i, left, right, j;
    string s[1010];

    cin >> N;
    for (i = 1; i <= N; i++) cin >> s[i];
    cin >> Q;
    for (i = 0; i < Q; i++)
    {
        cin >> left >> right;
        for (j = left; j <= right; j++)
            cout << s[j] << "\n";
    }
}