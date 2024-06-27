#include <stdio.h>
main()
{
	int i = 0, j = 0;
	i++;
	j += i;
	printf("%d", i);
	do {
		i++;
		j += i;
		printf("+%d", i);
	} while (j <= 300);
	printf("=%d", j);
}