#include <stdio.h>
#define DCNT 8
main() 
{
	int i, j, w,gap;
	int d[8] = { 70,60,80,50,40,20,30,10 };
	gap = DCNT /2;
	printf("ソート前\n");
	printf("配列 d[] =");
	for (i = 0; i < 8; i++) {
		printf(" %d", d[i]);
	}
	while (gap > 0) {
		for (i = gap; i < DCNT;i++) {
			j = i - gap;
			while (j >= 0) {
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j+ gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
				j = j - gap;
			}
		}
		gap = gap / 2;
	}


	printf("\nソート後\n");
	printf("配列 d[] =");
	for (i = 0; i < 8; i++) {
		printf(" %d", d[i]);
	}
}