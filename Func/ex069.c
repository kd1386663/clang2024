#include <stdio.h>
main()
{
	int sum = 0, num = 0, cnt = 0;
	printf("�����F");
	while (scanf("%d", &num) != EOF) {
	printf("�����F");
	sum += num;
	cnt++;
	}
	printf("\n���v=%d\t����=%.2f\n", sum,(float)sum/cnt);
}