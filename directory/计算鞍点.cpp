#include <stdio.h>
int a[10][10];
int b[10][10];
int c[10][10];
int cnt = 0;

int main() {
	int n, x, q, p, i, j, min, max;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 1;  i <= 5; i++) {


		for (j = 1,  max = 0; j <= 5; j++) {
			if (a[i][j] > max) {
				x = j;
				max = a[i][j];
			}
		}
		b[i][x] = max;

	}


	for (j = 1;  j <= 5;  j++) {


		for (i = 1,   min = a[1][j]; i <= 5 ; i++) {

			if (a[i][j]  <= min) {
				min = a[i][j];
				q = i;
			}
		}
		c[q][j] = min;

	}
	for (n = 1, q = 1; q <= 5, n <= 5; q++, n++) {

		for (p = 1, x = 1; x <= 5, p <= 5; x++, p++) {

			if (b[n][x] == c[q][p] && b[n][x] != 0) {
				printf("%d %d %d", q, p, c[q][p]);
				cnt++;
			}

		}

	}

	if (cnt == 0)
		printf("not found");
	return 0;
}
