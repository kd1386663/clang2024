#include <stdio.h>
main()
{
	int ia,sum = 0,cnt = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &ia);
	while (ia != -999) {
		sum += ia;
		cnt++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &ia);
	}
	printf("���v = %d", sum);
	printf("���� = %.2f", (float)sum / cnt);
}