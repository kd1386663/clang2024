#include <stdio.h>
main()
{
	int i = 20;
	while (i >= 0) {
		
		printf("%3.d", i);
		if (i % 10 == 1) {
			printf("\n");
		}
	i--;
	}
}