#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cin >> s;
    if (s == ")1(") cout << 2;
    else if (s == "(1)") cout << 0;
    else cout << 1;
}