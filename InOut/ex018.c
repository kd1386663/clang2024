#include <stdio.h>
main()
{
	int no1, no2, no3, all;
	printf("������3����\n");
	scanf("%d%d%d", &no1,&no2,&no3);
	all = no1 + no2 + no3;
	printf("���v=%d\n", all);
	printf("����=%.2f\n", (float)all / 3);
}