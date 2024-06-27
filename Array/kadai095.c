#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 },c[10];
	int i,sum;
	
	for (i = 0,sum= 0; i <= 9; i++) {
		printf("%5d", a[i]);
		sum += a[i];
	}
	printf("\n‡Œv = %d     •½‹Ï = %d\n", sum, sum / i);
	
	for (i = 0,sum = 0; i <= 9; i++) {
		printf("%5d", b[i]);
		sum += b[i];
	}
	printf("\n‡Œv = %d     •½‹Ï = %d\n", sum, sum / i );

}
