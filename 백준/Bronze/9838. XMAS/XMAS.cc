#include <iostream>

using namespace std;

int num[20001];

int main(void)
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        num[n] = i;
    }
    for(int i=1; i<=t; i++)
        cout << num[i] << '\n';
}