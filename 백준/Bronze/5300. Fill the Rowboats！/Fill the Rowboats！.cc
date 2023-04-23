#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    int st = 1;
    
    while(st <= n)
    {
        cout << st << ' ';
        if(st % 6 == 0)
            cout << "Go! ";
        st++;
    }
    st--;
    if(st % 6 != 0)
    	cout << "Go!";
}