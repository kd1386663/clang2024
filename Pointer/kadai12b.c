#include <stdio.h>
main() 
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i,j;
	int *p_a, *p_b;
	p_a = a;
	p_b = b;
	printf("ーーー実行前ーーー\n");
	printf("配列 a[] = ");
	for (i = 0; a[i] != 0; i++) {
		printf("%d", *p_a++);
		if (a[i + 1] != 0) {
			printf(",");
		}
	}
	while (*p_a++ = *p_b++);
	printf("\nーーー実行後ーーー\n");
	printf("配列 a[] = ");
	for (i = 0; a[i] != 0; i++) {
		printf("%d", a[i]);
		if (a[i + 1] != 0) {
			printf(",");
		}
	}
}