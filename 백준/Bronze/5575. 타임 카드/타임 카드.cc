#include <iostream>

using namespace std;

int main()
{
	int H = 0;
	int M = 0;
	int S = 0;
	int total = 0;
	for (int i = 0; i < 3; i++, total = 0)
	{
		cin >> H >> M >> S;
		total -= (3600 * H + 60 * M + S);
		cin >> H >> M >> S;
		total += (3600 * H + 60 * M + S);
		cout << total / 3600 << " " << total % 3600 / 60 << " " << total % 60 << endl;
	}
	return 0;
}