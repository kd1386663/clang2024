#include <stdio.h>
int bekijyou(int a, int b);
main()
{
	int a,b,kotae;
	printf("���l�P�H");
	scanf("%d", &a);
	printf("���l�Q�H");
	scanf("%d", &b);
	kotae = bekijyou(a,b);
	printf("%d��%d��́A%d", a, b, kotae);
}

int bekijyou(int a, int b) {
	int c,cnt;
	c = a;
	for (cnt = 1; cnt < b; cnt++) {
		c *= a ;
	}
	return c;
}