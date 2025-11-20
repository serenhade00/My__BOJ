#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    while(1)
    {
        cin >> s;
        if(s == "animal")
            cout << "Panthera tigris\n";
        else if(s == "flower")
            cout << "Forsythia koreana\n";
        else if(s == "tree")
            cout << "Pinus densiflora\n";
        else
            break;
    }
}