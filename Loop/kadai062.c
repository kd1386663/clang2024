#include <stdio.h>
main()
{
	int i = 20;
	do {
		
		printf("%3.d", i);
		if (i % 10 == 1) {
			printf("\n");
		}
		i--;
	} while (i > 0);
}