#include <stdio.h>
main()
{
	double a[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
	int i;
	for (i = 1; i <= 10; i++) {
		printf("a[%d] = %.6f\n", i - 1, a[i]);
	}
}