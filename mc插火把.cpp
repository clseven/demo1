#include <stdio.h>
int a[3000][3000];

int main() {
	int n, m, k, i, x, y, o, p, cnt = 0;
	scanf ("%d %d %d ", &n, &m, &k);
	for (i = 1; i <= m; i++) {
		scanf ("%d %d", &x, &y);
		x += 100;
		y += 100;
		a[x][y] = 1;
		a[x][y - 2] = 1;
		a[x - 1][y - 1] = 1;
		a[x][y - 1] = 1;
		a[x + 1][y - 1] = 1;
		a[x + 2][y] = 1;
		a[x + 1][y] = 1;
		a[x][y] == 1;
		a[x][y + 2] = 1;
		a[x - 1][y + 1] = 1;
		a[x][y + 1] = 1;
		a[x + 1][y + 1] = 1;
		a[x - 2][y] = 1;
		a[x - 1][y] = 1;
	}
	for (i = 1; i <= k; ++i) {
		scanf ("%d %d", &o, &p);

		o += 100;
		p += 100;
		a[o][p] = 1;
		for (int q = o - 2; q <= o + 2; q++) {
			for (int c = p - 2; c <= p + 2; ++c) {
				a[q][c] = 1;
			}
		}
	}
	for (i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; j++) {
			if (a[i + 100][j + 100] == 0)
				cnt++;
		}
	}
	printf ("%d", cnt);
	return 0;
}