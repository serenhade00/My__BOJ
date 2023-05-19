#include<iostream>

using namespace std;

int main() 
{
	int p1, s1, s2, p2, n, m;
	cin >> p1 >> s1 >> s2 >> p2;
	n = p1 + p2;
	m = s1 + s2;
	if (n > m)
		cout << "Persepolis";
	else if (n < m)
		cout << "Esteghlal";
	else if (n == m) {
		if (s1 > p2)
			cout << "Esteghlal";
		else if (s1 < p2)
			cout << "Persepolis";
		else if (s1 == p2)
			cout << "Penalty";
	}
}