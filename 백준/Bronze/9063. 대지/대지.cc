#include <stdio.h>
using namespace std;

int main() {
	int n, x, y, minX = 10000, minY = 10000, maxX = -10000, maxY = -10000;
	scanf("%d", &n);

	if (n <= 1) {
		printf("0\n");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		minX = minX < x ? minX : x;
		maxX = maxX > x ? maxX : x;
		minY = minY < y ? minY : y;
		maxY = maxY > y ? maxY : y;
	}

	minX += 10000;
	minY += 10000;
	maxX += 10000;
	maxY += 10000;

	printf("%d\n", (maxX - minX) * (maxY - minY));

	return 0;
}