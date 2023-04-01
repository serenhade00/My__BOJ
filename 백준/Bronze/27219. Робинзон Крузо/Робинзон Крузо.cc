#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    cout << string(n / 5, 'V') + string(n % 5, 'I');
}