#include <stdio.h>
main()
{
	int su;
	su = 0;
	printf("数は？");
	scanf("%d", &su);
	do {
		printf("*****\n");
		su -- ;//loop++ でも同じ判定になる
	} while (su > 0);

}