#include <stdio.h>
main()
{
	int su,sum = 0,cnt = 0;

	printf("����(~z�ŏI��)");
	while (scanf("%d", &su) != EOF) {
		sum += su;
		cnt++;
		printf("\n����(~z�ŏI��)");
	}
	printf("���v = %d", sum);
	printf("���� = %.1f", (float)sum / cnt);
}

