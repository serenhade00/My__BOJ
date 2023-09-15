#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int price = 0;
	int result = 0;
	cin >> result;
	for (int i = 0; i < 9; i++)
	{
		cin >> price;
		result -= price;
	}
	cout << result << "\n";
	return 0;
}