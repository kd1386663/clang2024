#include <stdio.h>
main()
{
	int gokei, ia,cnt;
	float ave;
	gokei = 0;
	printf("��������\n");
	scanf("%d", &ia);
	for (cnt = 0; ia != -999; cnt++) {
		gokei += ia;
		printf("��������");
		scanf("%d", &ia);

	}
	printf("���v = %d\n", gokei);
	ave = (float)gokei / cnt;
	printf("���� = %.2f\n", ave);
}