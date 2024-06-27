#include <stdio.h>
int saidai(int *p,int number);
int saisyou(int *p,int number);
#define TBL_END 8
main(){
	int a[8] = { 6,10,8,2,9,5,1,7 },max = 0,min = 0;
	max = saidai(a,8);
	printf("Å‘å’l = %d\n", max);
	min = saisyou(a,8);
	printf("Å¬’l = %d\n", min);
}

int saidai(int *p,int number) {
	int max = p[0], i;
	for (i = 1; i < number; i++) {
		if (max < p[i]) {
			max = p[i];
		}
	}
	return max;
	
}
int saisyou(int *p,int number) {
	int min = p[0], i;
	for (i = 0; i < number; i++) {
		if (min > p[i]) {
			min = p[i];
		}
	}
	return min;

}
