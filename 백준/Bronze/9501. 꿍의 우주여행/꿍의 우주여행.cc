#include<iostream>
using namespace std;
int main()
{
    double t, n, d, vi, fi, ci;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int cnt=0;
        cin >> n >> d;
        for(int j=0; j<n; j++)
        { 
            cin >> vi >> fi >> ci;
            if (vi * (fi/ci)>=d)
                cnt++;
        }
        cout << cnt << '\n';
    }
}