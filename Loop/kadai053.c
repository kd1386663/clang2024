#include <stdio.h>
main()
{
	int a, i;
	printf("®”H");
	scanf("%d", &a);
	for (i = a; i <= (10 + a); i++) {
		printf("%3.d", i);
	}
}