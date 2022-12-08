#include <iostream>

using namespace std;
int main(void)
{
    int n, num, sum = 0, cnt = 1;
    cin >> n;
    
    bool op = 0;
    for(int i=0; i<n; i++)
    {
        cin >> num;
        if(!op && num)
        {
            sum += 1;
            op = 1;
            cnt++;
        }
        else if(op && num)
        {
        	sum += cnt;
        	cnt++;
        }
        else
        {
            cnt = 1;
            op = 0;
        }
    }
    cout << sum;
}