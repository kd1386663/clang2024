#include <stdio.h>
main()
{
	double a, b;
	double *p_a = &a, *p_b = &b;
	printf("�����l�P�H");
	scanf("%lf", p_a);
	printf("�����l�Q�H");
	scanf("%lf", p_b);
	if (*p_a > *p_b) {
		printf("�傫���ق�= %.6lf", *p_a);
	}
	else {
		printf("�傫���ق�= %.6lf", *p_b);

	}
}