#include <stdio.h>
int a[5003];

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		a[i] = i;
		int cnt = 0;

		for (j = 1; j <= n; j++) {
			if (a[i] % j == 0)
				cnt++;


		}
		if (cnt % 2 != 0) {
			printf("%d ", a[i]);
		}
	}
	return 0;
}