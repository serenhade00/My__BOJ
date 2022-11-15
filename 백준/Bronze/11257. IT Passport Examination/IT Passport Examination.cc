#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string s;
        int a, b, c;
        cin >> s >> a >> b >> c;
        
        cout << s << ' ' << a+b+c << ' ';
        if(a+b+c >= 55 && a >= 35*0.3 && b >= 25*0.3 && c >= 40*0.3)
            cout << "PASS\n";
        else
            cout << "FAIL\n";
    }
}