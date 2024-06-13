#include <bits/stdc++.h>

using namespace std;

int num[31];
int main(void)
{
    int n, d, sum = 0;
    cin >> n >> d;
    for(int i=0; i<n; i++)
    {
        cin >> num[i];
        sum += num[i];
    }
    for(int i=0; i<n; i++)
        cout << d/sum * num[i] << '\n';
}