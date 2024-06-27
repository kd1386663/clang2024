#include <stdio.h>
void sort_asc(int* p_a);
void sort_desc(int* p_a);
main()
{
	int i,j,a[] = { 10,25,7,45,2,100,3,70,50 };
	printf("ソート方法（0:昇順 1:降順）");
	scanf("%d", &i);
	printf("ソート前\n");
	for (j = 0; j < 9; j++) {
		printf("%d ", a[j]);
	}

	if (i == 0) {
		sort_asc(a);
	}
	else {
		sort_desc(a);
	}

	printf("\nソート後\n");
	for (j = 0; j < 9; j++) {
		printf("%d ", a[j]);
	}
}
void sort_asc(int* p_a) {
	int i, j = 8,w;
	while (j > 0){
		for (i = 0; i < j; i++) {
			if (p_a[i] > p_a[i+1]) {
				w = p_a[i];
				p_a[i] = p_a[i+1];
				p_a[i+1] = w;
			}
		}
		j--;
	}
	
}
void sort_desc(int* p_a) {
	int i, j = 8, w;
	while (j > 0) {
		for (i = 0; i < j; i++) {
			if (p_a[i] < p_a[i + 1]) {
				w = p_a[i];
				p_a[i] = p_a[i + 1];
				p_a[i + 1] = w;
			}
		}
		j--;
	}

}