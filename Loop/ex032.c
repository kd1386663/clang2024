#include <stdio.h>
main()
{
	int su,i;
	printf("数を入れて；");
	scanf("%d", &su);
	for (i = 1; i <= 5; i++) {
		printf("%d  ", su * i);
	}



}