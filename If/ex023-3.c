#include <stdio.h>
main()
{
	int siki, no1, no2,kei;
	printf("演算子を入力\n");
	scanf("%d", &siki);
	printf("2つの整数を入力\n");
	scanf("%d", &no1);
	scanf("%d", &no2); 
	if (siki == 1) {
		kei = no1 + no2;
	}
	else {
		if (siki == 2) {
			kei = no1 - no2;
		}
		else {
			if (siki == 3) {
				kei = no1 * no2;
			}
			else {
				if (siki == 4) {
					kei = no1 / no2;
				}
			}
		}
	}
	printf("%d", kei);
}