#include <stdio.h>
main()
{
	double a, b;
	double *p_a = &a, *p_b = &b;
	printf("実数値１？");
	scanf("%lf", p_a);
	printf("実数値２？");
	scanf("%lf", p_b);
	if (*p_a > *p_b) {
		printf("大きいほう= %.6lf", *p_a);
	}
	else {
		printf("大きいほう= %.6lf", *p_b);

	}
}