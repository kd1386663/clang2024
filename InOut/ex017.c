#include  <stdio.h>
main()
{
	float no1;
	float no2;
	float no3;
	float all;
	printf("一つ目の実数");
	scanf("%f", &no1);
	printf("二つ目の実数");
	scanf("%f", &no2);
	printf("三つ目の実数");
	scanf("%f", &no3);
	all = no1 + no2 + no3;
	printf("合計=%3.2f\n", all);
	printf("平均=%3.2f\n", all / 3);

}