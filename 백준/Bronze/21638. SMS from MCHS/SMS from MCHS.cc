#include <iostream>

using namespace std;

int main(void)
{
    int t1, v1, t2, v2;
    cin >> t1 >> v1 >> t2 >> v2;
    
    if(t2 < 0 && v2 >= 10)
    {
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
        return 0;
    }
    if(t2 < t1)
    {
        cout << "MCHS warns! Low temperature is expected tomorrow.";
        return 0;
    }
    if(t2 >= t1 && v2 > v1)
    {
        cout << "MCHS warns! Strong wind is expected tomorrow.";
        return 0;
    }
    
    cout << "No message";
}