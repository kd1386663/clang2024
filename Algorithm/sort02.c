#include <stdio.h>
main() 
{
	int i, j, w;
	int d[5] = { 30,7,25,16,10 };
	printf("�\�[�g�O\n");
	printf("�z�� d[] =");
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
	printf("\n�\�[�g��\n");
	printf("�z�� d[] =");
	for (i = 0; i < 5; i++) {
		printf(" %d", d[i]);
	}
}