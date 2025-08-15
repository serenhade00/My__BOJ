#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i;
    string s;
    bool alpha[26] = { 0 };

    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> s;
        alpha[s[0] - 'A'] = true;
    }
    for (i = 0; i < 26; i++)
        if (alpha[i] == false)
            break;
    cout << i;
}