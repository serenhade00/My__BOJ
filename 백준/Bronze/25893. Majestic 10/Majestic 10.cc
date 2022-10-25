#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int a[3];
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
            cin >> a[j];
        
        for(auto e : a)
        	cout << e << " ";  
        sort(a, a+3);
       
        cout << '\n';
        if(a[0] >= 10 && a[1] >= 10 && a[2] >= 10)
            cout << "triple-double\n";
        else if(a[1] >= 10 && a[2] >= 10)
            cout << "double-double\n";
        else if(a[2] >= 10)
            cout << "double\n";
        else
            cout << "zilch\n";
        
        cout << '\n';
    }
}