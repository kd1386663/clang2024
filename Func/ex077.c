#include <stdio.h>
void keisan (int n1[], int* max, int* min);
main()
{
	int num[3], dai;
	int syo;
	printf("������3����:");
	scanf("%d%d%d", &num[0], &num[1], &num[2]);
	keisan(num, &dai, &syo);
	printf("�ő�l�A%d\t�ŏ��l�A%d", dai,syo);

}

void keisan(int n1[], int* max, int* min) {
	*max = n1[0];
	int i;
	for (i = 1; n1[i] > *max; i++) {
		*max = n1[i];
	}
	*min = n1[0];
	for (i = 1; n1[i] < *min; i++) {
		*min = n1[i];
	}
}