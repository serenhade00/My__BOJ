#include <iostream>
#include <string>
using namespace std;

bool solve(int x)
{
    return to_string(x).find("50") != string::npos;
}

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int N, i, cnt = 0;
    cin >> N;
    for (i = 1; i < N; i++)
        if (solve(i))
            cnt++;
    cout << N + cnt;
}