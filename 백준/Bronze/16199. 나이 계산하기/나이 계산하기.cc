#include <iostream>
using namespace std;

int main()
{
	int Y1, M1, D1;
	int Y2, M2, D2;
	cin >> Y1 >> M1 >> D1;
	cin >> Y2 >> M2 >> D2;

	if (M2 < M1)
		cout << Y2 - Y1 - 1 << "\n";
	else if (M2 == M1 && D2 < D1)
		cout << Y2 - Y1 - 1 << "\n";
	else
		cout << Y2 - Y1 << "\n";

	cout << Y2 - Y1 + 1 << "\n";
	cout << Y2 - Y1 << "\n";

	return 0;
}