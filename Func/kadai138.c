#include <stdio.h>
void cnt(int su);
main()
{
	int su;
	printf("®”HF");
	scanf("%d", &su);
	cnt(su);
}
void cnt(int su) {
	int cnt;
	for (cnt = 0; su > cnt; cnt++) {
		printf("*");
	}
}