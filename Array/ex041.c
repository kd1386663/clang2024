#include <stdio.h>
main()
{
	int i;
	float box[3],sum,ave;
	sum = 0;
	ave = 0;
	for (i = 0; i <= 2; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
			ave++;
	}
	for (i = 0; i <= 2; i++) {
		sum += box[i];
	}
	printf("合計は %.2f です\n平均は%.2f です\n", sum,sum/ave);

}