#include <stdio.h>
main()
{
	int su, loop;
	loop = 0;
	printf("数を入れて");
	scanf("%d", &su);
	loop = su;
	while (loop > 0){
	    printf("*");
		loop--;
	}

}