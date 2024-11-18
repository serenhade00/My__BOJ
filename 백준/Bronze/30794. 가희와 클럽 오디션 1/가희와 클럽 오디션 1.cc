#include <iostream>
using namespace std;
int lv;
string str;
int main()
{
    cin >> lv >> str;
    if (str == "bad")
        cout << 200 * lv;
    else if (str == "cool")
        cout << 400 * lv;
    else if (str == "great")
        cout << 600 * lv;
    else if (str == "perfect")
        cout << 1000 * lv;
    else
        cout << 0;
}