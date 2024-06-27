#include <stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1, 22.2, 33.3, 44.4 };
	int i,sumA =0;
	int *p_a;
	float *p_b;
	float sumB = 0;
	p_a = a;
	p_b = b;
	for (i = 0; i < 6; i++) {
		sumA += *p_a;
		p_a++;
	}
	printf("配列a\t合計 = %3.d\t平均 = %.3f\n", sumA, (float)sumA / i);
	
	for (i = 0; i < 4; i++) {
		sumB += *p_b;
		p_b++;
	}
	printf("配列b\t合計 = %.3f\t平均 = %.3f", sumB, sumB / i);
}