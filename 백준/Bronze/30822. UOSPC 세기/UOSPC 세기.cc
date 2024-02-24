#include <bits/stdc++.h>

using namespace std;

int num[5];
int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'u')
            num[0]++;
        else if(s[i] == 'o')
            num[1]++;
        else if(s[i] == 's')
            num[2]++;
        else if(s[i] == 'p')
            num[3]++;
        else if(s[i] == 'c')
            num[4]++;
    }
    cout << *min_element(num, num+5);    
}