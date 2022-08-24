#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double d, w, h;
    double ans;
    double tmp;
    cin >> d >> w >> h;
    tmp = h/w;
    ans = sqrt((d*d)/(tmp*tmp+1));
    cout << (int)ans << ' ' << (int)(ans*tmp);
}