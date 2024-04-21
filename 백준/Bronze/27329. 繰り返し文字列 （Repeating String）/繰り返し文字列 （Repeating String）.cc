#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    string s;

    cin >> n >> s;
    for (int i=0; i<n/2; i++)
    {
        if (s[i] != s[i+n/2])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}