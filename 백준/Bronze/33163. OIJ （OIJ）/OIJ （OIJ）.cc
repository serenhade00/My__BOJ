#include <iostream>
using namespace std;

int N;
char A[128];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    A['J'] = 'O', A['O'] = 'I', A['I'] = 'J';
    cin >> N;
    while (N--) {
        char c; cin >> c;
        cout << A[c];
    }
}