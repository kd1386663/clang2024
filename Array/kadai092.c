#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i;
	printf("�z��a����z��c�ɃR�s�[\n");
	for (i = 0; i <= 9; i++) {
		c[i] = a[i];
	}
	printf("�z��a = ");
	for (i = 0; i <= 9; i++) {
		printf("%4d", a[i]);
	}
	printf("\n�z��c = ");
	for (i = 0; i <= 9; i++) {
		printf("%4d", c[i]);
	}
}
