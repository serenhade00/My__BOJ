#include <bits/stdc++.h>

using namespace std;

void print_blank(int n)
{
    for(int i=0; i<n; i++)
        cout << ' ';
}

void print_stars(int n)
{
    for(int i=0; i<n; i++)
        cout << '*';
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        print_blank(n-i);
        print_stars(2*i-1);
        cout << '\n';
    }
    for(int i=1; i<=n-1; i++)
    {
        print_blank(i);
        print_stars(2*(n-i)-1);
        cout << '\n';
    }
}