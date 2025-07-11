#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int x, y;
    cin >> x >> y;
    y -= x;
    while (y > 180) y -= 360; 
    while (y <= -180) y += 360; 
    cout << y;
}