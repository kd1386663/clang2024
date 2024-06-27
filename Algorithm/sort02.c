#include <stdio.h>
main() 
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };
	printf("ソート前\n");
	printf("配列 d[] =");
	for (i = 0; i < 5; i++) {
		printf(" %d", d[i]);
	}

	for (i = 4; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j + 1]) {
				w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
			}
		}
		
	}
	printf("\nソート後\n");
	printf("配列 d[] =");
	for (i = 0; i < 5; i++) {
		printf(" %d", d[i]);
	}
}