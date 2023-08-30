#include <iostream>
using namespace std;

int main(void)
{
    int num, cnt = 0;
    bool last_zero = true;

    cin >> num;
    while (num)
    {
        if (num % 10 != 0)
            last_zero = false; 
        if (num % 10 == 0 && last_zero == false)
            cnt++;
        num /= 10;
    }
    cout << cnt;
}