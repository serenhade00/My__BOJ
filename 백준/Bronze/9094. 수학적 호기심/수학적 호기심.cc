#include <iostream>
using namespace std;

int main()
{
	int T, n, m;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> n >> m;
		int s = 0;
		for (int a = 1; a < n - 1; a++)
		{
			int aa = a * a + m;
			for (int b = a + 1; b < n; b++)
			{
				if ((aa + b * b) % (a * b) == 0)
					s++;
			}
		}
		cout << s << "\n";
	}
}