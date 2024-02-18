#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    set<char> s;
    s.insert('I'); s.insert('O'); s.insert('S'); s.insert('H');
    s.insert('Z'); s.insert('X'); s.insert('N'); 
    string tmp;
    cin >> tmp;
    int len = tmp.size();
    bool op = 0;
    for(int i=0; i<len; i++)
    {
        if(s.find(tmp[i]) != s.end())
            continue;
        op = 1;
    }
    if(!op)
        cout << "YES";
    else
        cout << "NO";
}