#include <iostream>

using namespace std;

int main(void)
{
    int a[6];
    for(int i=0; i<6; i++)
        cin >> a[i];
    if(a[0]*3+a[1]*2+a[2] > a[3]*3+a[4]*2+a[5])
        cout << "A";
    else if(a[0]*3+a[1]*2+a[2] == a[3]*3+a[4]*2+a[5])
        cout << "T";
    else
        cout << "B";
        
}