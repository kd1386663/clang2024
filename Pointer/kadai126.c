#include <stdio.h>
main() 
{
	int data[] = { 10,9,1,20,45,21,38,45,88 },max = 0,min = 999;
	int *p_data;
	int i;
	p_data = data;
	printf("配列の内容\n");
	printf("data[] = ");
	for (i = 0; i < 9; i++) {
		printf(" %d", *p_data);
		if (max < *p_data) {
			max = *p_data;
		}
		if (min > *p_data) {
			min = *p_data;
		}
		p_data++;

	}
	printf("\n");
	printf("最大値 = %d\n", max);
	printf("最小値 = %d\n", min);
	
	
}