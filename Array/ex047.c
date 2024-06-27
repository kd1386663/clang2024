#include <stdio.h>
main()
{
	int i ,y;
	float x[3][2],sum;
	for (y = 0,sum = 0; y <= 2; y++) {
		for (i = 0; i <= 1; i++) {
			printf("x[%d][%d] =", y, i);
			scanf("%f", &x[y][i]);
			sum += x[y][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï = %.2f\n", y, sum / 2);
		sum = 0;
	}
}