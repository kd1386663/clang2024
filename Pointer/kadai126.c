#include <stdio.h>
main() 
{
	int data[] = { 10,9,1,20,45,21,38,45,88 },max = 0,min = 999;
	int *p_data;
	int i;
	p_data = data;
	printf("�z��̓��e\n");
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
	printf("�ő�l = %d\n", max);
	printf("�ŏ��l = %d\n", min);
	
	
}