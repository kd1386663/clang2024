#include <stdio.h>
main()
{
	int i,sum = 0,cnt = 0;
	printf("�����i-999�j�ŏI���H");
	scanf("%d", &i);
	do {
		sum += i;
		cnt++;
		printf("�����i-999�j�ŏI���H");
		scanf("%d", &i);
	} while (i != -999);
	printf("���v = %d\n", sum);
	printf("���� = %f\n", (float)sum / cnt);
}