#include <iostream>

using namespace std;

int p1_win(char a, char b)
{
    if(a == 'R' && b == 'S' || a == 'P' && b == 'R' || a == 'S' && b == 'P')
        return 1;
    else if(a == b)
        return 0;
    else
        return -1;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int p1 = 0, p2 = 0;
        char a, b;
        int n;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> a >> b;
            int val = p1_win(a, b);
            if(val == 1)
                p1++;
            else if(val == -1)
                p2++;
            else
                continue;
        }
        if(p1 > p2)
            cout << "Player 1\n";
        else if(p1 == p2)
            cout << "TIE\n";
        else
            cout << "Player 2\n";
    }
}