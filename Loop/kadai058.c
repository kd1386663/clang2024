#include <stdio.h>
main()
{
	int i,j;
	for (i = 32,j = 1; i <= 126; i++,j++) {

		printf("%x %c ", i,i);
		if (j % 10 == 0) {
			printf("\n");
		}
	}
}