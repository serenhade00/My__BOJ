#include <iostream>
using namespace std;

int main()
{
	double X = 0;
	double Y = 0;
	cin >> X >> Y;
	double min = X / Y * 1000;
	double price = 0;

	int N = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> X >> Y;
		price = X / Y * 1000;
		min = min > price ? price : min;
	}
	cout << fixed;
	cout.precision(2);

	cout << min;
}