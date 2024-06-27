#include <stdio.h>
main()
{
	int i,sum = 0,cnt = 0;
	while (1) {
		printf("整数（ー９９９で終了）？");
		scanf("%d", &i);
		if (i == -999) { break; };
		if (i < 0) { 
			continue; 
		}
		sum += i;
		cnt++;
	}
	printf("合計 = %d\n", sum);
	printf("平均 = %.3f\n", (float)sum / cnt);
}