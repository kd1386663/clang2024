#include <stdio.h>
main()
{
	int su, loop;
	loop = 0;
	printf("数を入れて");
	scanf("%d", &su);
	while (loop < su){
	    printf("*");
		loop += 1;//loop++ でも同じ判定になる
	}

}