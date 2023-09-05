#include <iostream>

using namespace std;

int main(void)
{
    char a;
    cin >> a;
    if(a == 'M')
        cout << "MatKor"; 
    if(a == 'W')
        cout << "WiCys";
    if(a == 'C')
        cout << "CyKor";
    if(a == 'A')
        cout << "AlKor";
    if(a == '$')
        cout << "$clear";
}