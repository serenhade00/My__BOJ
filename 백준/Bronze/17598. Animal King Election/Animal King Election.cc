#include <iostream>

using namespace std;

int main(void)
{
    int t = 0, l = 0;
    for(int i=0; i<9; i++)
    {
        string s; cin >> s;
        if(s == "Tiger")
            t++;
        else
            l++;
    }
    t > l ? cout << "Tiger" : cout << "Lion";
}