#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i, cnt = 0;
    string s;

    cin >> N;
    for (i = 1; i <= N; i++)
    {
        cin >> s;
        if (s == "he" || s == "him" || s == "she" || s == "her") cnt++;
    }
    cout << cnt;
}