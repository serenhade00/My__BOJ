#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int arr[7] = { 425,450,495,570,590,620,781 }, n;
    string s[7] = { "Violet","Indigo","Blue","Green","Yellow","Orange","Red" };

    cin >> n;
    cout << s[upper_bound(arr, arr + 7, n) - arr];
}