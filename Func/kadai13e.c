#include <stdio.h>

int saidai(int *p_a);
int saisyo(int *p_a);
main()
{
	int i,max,min, a[] = { 10,25,7,45,2,100,3,70,50 };
	printf("”z—ñ‚Ì“à—e\n");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	max = saidai(a);
	min = saisyo(a);
	printf("\nmax = %d\tmin = %d\n", max, min);
}
int saidai(int* p_a) {
	int i,a = -1;
	*p_a = p_a[0];
	for (i = 0; i < 9; i++) {
		if (a < *p_a) {
			a = *p_a;
		}
		p_a++;
	}
	return a;
}
int saisyo(int* p_a) {
	int i, a = 999;
	*p_a = p_a[0];
	for (i = 0; i < 9; i++) {
		if (a > *p_a) {
			a = *p_a;
		}
		p_a++;
	}
	return a;
}