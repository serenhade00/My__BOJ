#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num[9] = {100,100,200,200,300,300,400,400,500};
    int sum = 0;
    for(int i=0; i<9; i++)
    {   
        int val;
        cin >> val;
        sum += val;
        if(val > num[i])
        {
            cout << "hacker";
            return 0;
        }
    }
    if(sum < 100)
        cout << "none";
    else
        cout << "draw";
}