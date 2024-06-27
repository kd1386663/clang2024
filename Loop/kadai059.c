#include <stdio.h>
main()
{
	int i, j;
	printf("   ");
	for (i = 1; i <= 9; i++) {
		printf("%3.d", i);
	}
	printf("\n");

	for (i = 1; i <= 27; i++) {
		printf("=");
	}
	printf("\n");
	for (i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (j = 1; j <= 9; j++) {
			printf(" %3.d", i * j);
		}
		printf("\n");
	}
}