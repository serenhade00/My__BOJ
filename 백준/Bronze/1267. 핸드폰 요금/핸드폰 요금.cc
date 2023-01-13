#include <bits/stdc++.h>

using namespace std;

int num[21];

int main(void)
{
    int n;
    int a_sum = 0, b_sum = 0;
    cin >> n;
    
    for(int i=0; i<n; i++)
        cin >> num[i];
    
    for(int i=0; i<n; i++)
    {
        a_sum += ((num[i] / 30) + 1) * 10;
        b_sum += ((num[i] / 60) + 1) * 15;
    }
    if(a_sum < b_sum)
        cout << "Y ";
    else if(a_sum == b_sum)
        cout << "Y M ";
    else
        cout << "M ";
    
    cout << min(a_sum, b_sum);
}