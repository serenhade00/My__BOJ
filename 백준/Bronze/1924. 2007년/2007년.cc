#include <bits/stdc++.h>

using namespace std;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int m, d, sum = 0;
    cin >> m >> d;
    
    for(int i=1; i<m; i++)
        sum += days[i];
    sum += d;
    
    switch(sum % 7)
    {
        case 1: cout << "MON"; break;
        case 2: cout << "TUE"; break;
        case 3: cout << "WED"; break;
        case 4: cout << "THU"; break;
        case 5: cout << "FRI"; break;
        case 6: cout << "SAT"; break;
        case 0: cout << "SUN"; break;              
    }
}