#include <stdio.h>
main()
{
	int su,max = 0,min = 0;
	printf("����(~z�ŏI��)");
	while (scanf("%d", &su) != EOF) {
		if (max < su) {
			max = su;
		}
		if (min > su) {
			min = su;
		}
		printf("\n����(~z�ŏI��)");
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);
}

