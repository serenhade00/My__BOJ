#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N, i;
    string s;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> s;
        if (s == "Algorithm") cout << 204;
        else if (s == "DataAnalysis") cout << 207;
        else if (s == "ArtificialIntelligence") cout << 302;
        else if (s == "CyberSecurity") cout << "B101";
        else if (s == "Network") cout << 303;
        else if (s == "Startup") cout << 501;
        else cout << 105;
        cout << "\n";
    }
}