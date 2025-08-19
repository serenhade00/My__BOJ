#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n; 
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		vector<double> v(n);
		for (int i = 0; i < n; i++)
			scanf("%lf", &v[i]);
		for (int i = 1; i < n - 1; i++)
			if (v[i] > ((v[i - 1] + v[i + 1]) / (double)2))
				v[i] = (double(v[i - 1] + v[i + 1]) / (double)2);
		printf("Case #%d: %.6lf\n", i + 1, v[n - 2]);
	}
	return 0;
}