#include <iostream>

using namespace std;

char c[10001];
int N;
int sum, bonus;

int main() {
	scanf("%d", &N);
	scanf("%s", c + 1);

	for (int i = 1; i <= N; i++) {
		if (c[i] == 'O') {
			sum += (i + bonus);
			bonus++;
		}
		else
			bonus = 0;
	}
	printf("%d\n", sum);
}