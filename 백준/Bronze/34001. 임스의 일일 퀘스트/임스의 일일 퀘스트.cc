#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0);
    ll L;
    cin >> L;

    if (L < 200) cout << 0;
    else if (L < 210) cout << 500;
    else if (L < 220) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 210) cout << 0;
    else if (L < 220) cout << 500;
    else if (L < 225) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 220) cout << 0;
    else if (L < 225) cout << 500;
    else if (L < 230) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 225) cout << 0;
    else if (L < 230) cout << 500;
    else if (L < 235) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 230) cout << 0;
    else if (L < 235) cout << 500;
    else if (L < 245) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 235) cout << 0;
    else if (L < 245) cout << 500;
    else if (L < 250) cout << 300;
    else cout << 100;
    cout << "\n";

    if (L < 260) cout << 0;
    else if (L < 265) cout << 500;
    else if (L < 270) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 265) cout << 0;
    else if (L < 270) cout << 500;
    else if (L < 275) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 270) cout << 0;
    else if (L < 275) cout << 500;
    else if (L < 280) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 275) cout << 0;
    else if (L < 280) cout << 500;
    else if (L < 285) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 280) cout << 0;
    else if (L < 285) cout << 500;
    else if (L < 290) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 285) cout << 0;
    else if (L < 290) cout << 500;
    else if (L < 295) cout << 300;
    else cout << 100;
    cout << ' ';

    if (L < 290) cout << 0;
    else if (L < 295) cout << 500;
    else if (L < 300) cout << 300;
    else cout << 100;
}