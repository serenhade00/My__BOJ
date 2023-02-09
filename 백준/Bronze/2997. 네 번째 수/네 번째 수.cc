#include <bits/stdc++.h>

using namespace std;

int a[3];
int main(void)
{
    for(int i=0; i<3; i++)
        cin >> a[i];
    
    sort(a, a+3);
    
    if(a[2]-a[1] == a[1]-a[0])
        cout << a[2] + a[1] - a[0];
    else
    {
        if(a[1]-a[0] < a[2]-a[1])
            cout << a[1] + a[1] - a[0];
        else
            cout << a[0] + a[2] - a[1]; 
    }    
}