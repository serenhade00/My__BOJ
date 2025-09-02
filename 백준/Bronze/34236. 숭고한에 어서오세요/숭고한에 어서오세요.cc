#include <iostream>

using namespace std;

int num[101];

int main(void)
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> num[i];
    cout << num[n-1] + num[1] - num[0];
}