#include <iostream>

using namespace std;

int main(void)
{
    int t, a_sum = 100, b_sum = 100;
    cin >> t;
    for(int i=0; i<t; i++)
    {
    	int a, b;
        cin >> a >> b;
        if(a < b)
            a_sum -= b;
        else if(a == b)
            continue;
        else
            b_sum -= a;
    }
    cout << a_sum << '\n' << b_sum;
}