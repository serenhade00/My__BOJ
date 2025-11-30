#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		string s;
		cin >> s;
		if(s == "yonsei")
        {
            cout << "Yonsei Won!";
            return 0;
        }
		else if(s == "korea")
        {
            cout << "Yonsei Lost...";	
            return 0;
        }	
	}
}