#include <stdio.h>
main()
{
	int ia;
	for (ia = 0; ia <= 60; ia++) {
		printf("%3.d", ia);
		if (ia % 20 == 0) {
			printf("\n");
		}
	}
}