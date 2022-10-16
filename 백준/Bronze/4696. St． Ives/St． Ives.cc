#include <iostream>

using namespace std;

int main(void)
{
    while(1)
    {
        double n;
        cin >> n;
        if(n != 0)
        {
            double num = 1 + n + n*n + n*n*n + n*n*n*n;
            
            cout << fixed;
            cout.precision(2);
            cout << num << '\n';
        }
        else
        	break;
    }
}