#include <stdio.h>
int bekijyou(int a, int b);
main()
{
	int a,b,kotae;
	printf("数値１？");
	scanf("%d", &a);
	printf("数値２？");
	scanf("%d", &b);
	kotae = bekijyou(a,b);
	printf("%dの%d乗は、%d", a, b, kotae);
}

int bekijyou(int a, int b) {
	int c,cnt;
	c = a;
	for (cnt = 1; cnt < b; cnt++) {
		c *= a ;
	}
	return c;
}