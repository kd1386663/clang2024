#include <stdio.h>
#define DCNT 79999
main() 
{
	int i, j,x, w,t = 0;
	int d[80000] = {};
	printf("�\�[�g�O\n");
	printf("�z�� d[] =");
	srand(1);
	for (i = 0; i < 700; i++) {
		printf(" %d", d[i]);
	}
	for (i = 0; i < 80000; i++) {
		d[i] = rand();
	}
	for (i = DCNT; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (d[j] > d[j + 1]) {
				w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
			}
		}
		for (j = i - 1; j >= 0; j--) {
			if (d[j] > d[j + 1]) {
				w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
			}
		}
		
	}
	printf("\n�\�[�g��\n");
	printf("�z�� d[] =");
	for (i = 0; i < 80000; i++) {
		printf(" %d", d[i]);
	}

}