#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll arr[4] = { 0 };
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);

    cout << arr[0] << ' ' << arr[2] << ' ' << arr[1] << ' ' << arr[3];
}