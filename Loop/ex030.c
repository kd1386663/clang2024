#include <stdio.h>
main()
{
	int su, tasu;
	tasu = 0;
	printf("数を入れて");
	scanf("%d", &su);
	while (tasu <= 10){
		printf("%d + %d = %d\n", su, tasu, (su + tasu));
		tasu++ ;
	}

}