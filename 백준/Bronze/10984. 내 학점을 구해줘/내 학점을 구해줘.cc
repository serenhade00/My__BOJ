#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n, num, score = 0;
        double sum = 0, tmp;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> num >> tmp;
            sum += num*tmp;
            score += num;
        }
        cout << fixed;
        cout.precision(1);
        cout << score << ' ' << sum / score << '\n';
    }
}