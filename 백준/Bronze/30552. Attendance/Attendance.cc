#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll N, i;
    string s[222];
    bool Printed = false;

    cin >> N;
    for (i = 0; i < N; i++) cin >> s[i];

    for (i = 0; i < N; i++)
    {
        if (i == N - 1 || s[i + 1] != "Present!")
        {
            Printed = true;
            cout << s[i] << "\n";
        }
        else i++;
    }
    if (!Printed) cout << "No Absences";
}