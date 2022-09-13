#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int num = 1;
    string s;
    cin >> n;
    getline(cin, s);
    while(n--)
    {
        getline(cin, s);
        cout << num << ". " << s << '\n';
        num++;
    }
    
}