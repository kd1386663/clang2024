#include <stdio.h>
main()
{
	int gokei, ia,cnt;
	float ave;
	gokei = 0;
	printf("数を入れて\n");
	scanf("%d", &ia);
	for (cnt = 0; ia != -999; cnt++) {
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);

	}
	printf("合計 = %d\n", gokei);
	ave = (float)gokei / cnt;
	printf("平均 = %.2f\n", ave);
}