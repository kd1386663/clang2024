#include <stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int *p_a,cnt;
	p_a = a[0];
	for (cnt = 1; cnt <= 25;cnt++) {
		
		printf("%3.d", *p_a++);
		if (cnt % 5 == 0) {
			printf("\n");
		}
		
	}
}