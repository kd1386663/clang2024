#include <stdio.h>
main()
{
	double a, b;
	double *p_a = &a, *p_b = &b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf", p_a);
	printf("ŽÀ”’l‚QH");
	scanf("%lf", p_b);
	if (*p_a > *p_b) {
		printf("‘å‚«‚¢‚Ù‚¤= %.6lf", *p_a);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤= %.6lf", *p_b);

	}
}