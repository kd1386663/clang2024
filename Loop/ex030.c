#include <stdio.h>
main()
{
	int su, tasu;
	tasu = 0;
	printf("��������");
	scanf("%d", &su);
	while (tasu <= 10){
		printf("%d + %d = %d\n", su, tasu, (su + tasu));
		tasu++ ;
	}

}