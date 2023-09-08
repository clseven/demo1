#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int a = rand() % 4 + 1;
	if (a == 1)
		printf("E0");
	if (a == 2)
		printf("E00");
	if (a == 3)
		printf("C00");
	if (a == 4)
		printf("÷Ò‘œ");
	return 0;
}