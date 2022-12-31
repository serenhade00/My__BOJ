#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        double a, b;
        cin >> a >> b;
        
        cout.precision(2);
        cout << fixed;
        cout << "The height of the triangle is " << a*2/b << " units\n";
    }
}