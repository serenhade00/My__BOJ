#include <iostream>
using namespace std;
int main() {
    int a, A, b, B;
    cin >> a >> A;
    cin >> b >> B;
    while (1)
    {
        A -= b;
        B -= a;
        if (A < 1 || B < 1) 
            break;
    }
    if (A < 1 && B < 1) { cout << "DRAW" << '\n'; }
    else
    {
        cout << "PLAYER ";
        printf("%c\n", A > B ? 'A' : 'B');
    }
}