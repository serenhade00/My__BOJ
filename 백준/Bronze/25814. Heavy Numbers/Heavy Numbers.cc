#include <iostream>

using namespace std;

int main(void)
{
    int aa = 0, bb = 0;
    string a, b;
    cin >> a >> b;
    for(int i=0; i<a.length(); i++)
        aa += a[i] - '0';
    for(int i=0; i<b.length(); i++)
        bb += b[i] - '0';
    if(aa*a.length() > bb*b.length())
        cout << 1;
    else if(aa*a.length() < bb*b.length())
        cout << 2;
    else
        cout << 0;
}