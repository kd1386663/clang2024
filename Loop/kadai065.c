#include <stdio.h>
main()
{
	int i,sum = 0,cnt = 0;
	printf("整数（-999）で終了？");
	scanf("%d", &i);
	do {
		sum += i;
		cnt++;
		printf("整数（-999）で終了？");
		scanf("%d", &i);
	} while (i != -999);
	printf("合計 = %d\n", sum);
	printf("平均 = %f\n", (float)sum / cnt);
}