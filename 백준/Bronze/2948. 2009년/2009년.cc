#include <iostream>
#include <string>
using namespace std;
int main() {
	string days[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", };//나머지 순서에 따라서 날짜 저장
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };//1~12월
	int d, m;
	cin >> d >> m;
	while (m != 1) {
		m--;
		d += month[m - 1];
	}
	d %= 7;
	cout << days[d];
}