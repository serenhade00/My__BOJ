#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	for(int i=0; i<t; i++)
	{
		string s;
	    cin >> s;
	    int sum = 0;
	    for(int j=0; j<13; j++)
	        sum += s[j] - '0';
	    sum += stoi(s.substr(10, 3)) * 10;
	    if(sum > 9999)
	        cout << to_string(sum).substr(1);
	    else if(sum < 1000)
	        cout << sum + 1000;
	    else
	        cout << sum;
	    cout << '\n';
	}
}