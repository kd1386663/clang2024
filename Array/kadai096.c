#include <stdio.h>
main()
{
	int a[10], num,i,j;
	num = 0;
	i = 0;
	while(1){
		printf("����(-999�ŏI��)?");
		scanf("%d", &num);
		if (num == -999) { break;}
		a[i] = num;
		i++;
	}
	printf("�z�� c =");
	for (j = 0; i > j; j++) {
		printf(" %d", a[j]);
	}
	
}