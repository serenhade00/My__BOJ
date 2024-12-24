#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;
    getline(cin, s);
    if(s.find("social") != string::npos || s.find("history") != string::npos || s.find("language") != string::npos || s.find("literacy") != string::npos)
        cout << "digital humanities";
    else if(s.find("bigdata") != string::npos || s.find("public") != string::npos || s.find("society") != string::npos)
        cout << "public bigdata";
}