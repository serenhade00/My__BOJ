#include <iostream>
 
using namespace std;
 
int main()
{
    int n, a;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        bool flag = 0;
        for (int j = 1; j < 11; j++) {
            cin >> a;
            if ((((j - 1) % 5) + 1) == a) {
                continue;
            }
            flag = 1;
        }
        if (!flag) {
            cout << i << "\n";
        }
    }
    return 0;
}