#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num[3];
    for(int i=0; i<3; i++)
        cin >> num[i];
    
    sort(num, num+3);
    cout << num[1]+num[2];
}