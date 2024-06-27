#include <stdio.h>
int add(int a, int b);
main()
{
	int a, b,max;
	printf("‚Q‚Â‚Ì®”HF");
	scanf("%d%d", &a, &b);
	max = add(a, b);
	printf("max = %d", max);
}
int add(int a, int b) {
	int max = 0;
	max = a + b;
	return max;
}