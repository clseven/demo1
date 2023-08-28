#include <stdio.h>
int a[1000002];
long long i, max = 0, min = 1e18 + 1;

int main() {
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		scanf("%lld", &a[i]);
	}

	for ( i = 1; i <= n; ++i) {
		if (a[i] >= max)
			max = a[i];
		if (a[i] <= min)

		}
	for ( i = 1; i <= n; ++i) {
		printf("%lld ", max - a[i]);
	}
	printf ("\n");
	for (i = 1; i <= n; ++i) {
		printf("%lld ", a[i] - min);
	}
	return 0;
}