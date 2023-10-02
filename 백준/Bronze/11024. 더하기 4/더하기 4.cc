#include <iostream>
#include <string>
using namespace std;
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string n;
        int sum = 0;
        getline(cin, n);
        string tmp = "" ;
        int len = n.size();
        for (int i = 0; i < len; i++) {
            tmp += n[i];
            if(n[i]==' '|| i==len-1)
            {
                sum += stoi(tmp); 
                tmp = "";
            }
        }
        cout << sum << '\n';
    }
}