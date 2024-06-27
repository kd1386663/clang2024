#include <stdio.h>
main()
{
	int a[10] = {10,20,30,40,50,60,70,80,90,100},c[10], num, i, j;
	num = 0;
	j = 9;
	for (i = 0; i < 10; i++) {
		c[j] = a[i];
		j--;
	}
	printf("”z—ña =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	printf("\n”z—ñc =");
	for (i = 0; i < 10; i++) {
		printf(" %d", c[i]);
	}

}