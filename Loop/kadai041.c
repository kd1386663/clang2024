#include <stdio.h>
main()
{
	int ia,sum = 0,cnt = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &ia);
	while (ia != -999) {
		sum += ia;
		cnt++;
		printf("整数(-999で終了)？");
		scanf("%d", &ia);
	}
	printf("合計 = %d", sum);
	printf("平均 = %.2f", (float)sum / cnt);
}