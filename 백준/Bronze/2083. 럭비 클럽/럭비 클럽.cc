#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while(1)
    {
		string name;
		int age, weight;
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0) 
			return 0;
		if (age > 17 || weight >= 80) 
			cout << name << ' ' << "Senior"<<endl;
		else 
			cout << name << ' ' << "Junior"<<endl;
	}
	return 0;
}