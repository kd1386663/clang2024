#include <stdio.h>
main()
{
	int i = 0;
	do {
		i++;
		printf("%3.d", i);
		if (i % 10 == 0) {
			printf("\n");
		}
	} while (i < 20);
}