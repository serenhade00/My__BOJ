#include <bits/stdc++.h>

using namespace std;

pair<double, double> p[10001];

double ccw(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double sum = (x1*y2 + x2*y3 + x3*y1) - (x1*y3 + x2*y1 + x3*y2);
    return sum / 2;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> p[i].first >> p[i].second;
    
    double ans = 0;
    for(int i=2; i<n; i++)
        ans += ccw(p[0].first, p[0].second, p[i-1].first, p[i-1].second, p[i].first, p[i].second);
    
    cout << fixed;
    cout.precision(1);
    cout << abs(ans);
}