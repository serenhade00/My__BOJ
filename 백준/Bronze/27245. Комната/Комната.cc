#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int w, l, h;
    cin >> w >> l >> h;
    cout << (h * 2 <= min(w, l) && min(w, l) * 2 >= max(w, l) ? "good" : "bad");
    return 0;
}