#include <stdio.h>
main()
{
	int su,loop;
	su = 0;
	loop = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	do {
		for (loop = 1; loop <= 5; loop++) {
		printf("*");
		}
		printf("\n");
		su -- ;//
	} while (su > 0);

}