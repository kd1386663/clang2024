#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int *p_a, * p_b, * p_c, cnt,wk;
	p_a = a[0];
	p_b = b[0];
	for (cnt = 0; cnt < 25; cnt++) {
		wk = *p_a;
		*p_a++ = *p_b;
		*p_b++ = wk;
	}
	p_a = a[0];
	p_b = b[0];
	printf("”z—ñ a\n");
	for (cnt = 1; cnt <= 25; cnt++) {
		printf("%4.d", (*p_a++) );
		if (cnt % 5 == 0){
			printf("\n");
		}
	}
	printf("”z—ñ b\n");
	for (cnt = 1; cnt <= 25; cnt++) {
		printf("%4.d", (*p_b++));
		if (cnt % 5 == 0) {
			printf("\n");
		}
	}

}