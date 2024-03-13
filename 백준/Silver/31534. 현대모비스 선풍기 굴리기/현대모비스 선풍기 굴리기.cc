#include <bits/stdc++.h>
#define PI 3.14159265359

using namespace std;

int main(void)
{
    int a, b, h;
    cin >> a >> b >> h;
    if(a > b)
        swap(a, b);
    
    cout << fixed;
    cout.precision(7);
    if(a == 0)
    	cout << (b*b+h*h)*PI;
    else
    {
    	if(a == b)
    	{
    		cout << -1;
    		return 0;
    	}
        double hh = (double)h*a / (b-a);
        cout << (((hh+h)*(hh+h)+(double)b*b)-(hh*hh+(double)a*a))*PI;
    }
}