#include <stdio.h>
void keisan (int n1, int n2,int *sum,float  *ave);
main()
{
	int num1, num2, gokei;
	float heikin;
	printf("�������Q����:");
	scanf("%d%d", &num1, &num2 );
	keisan(num1, num2, &gokei, &heikin);
	printf("���v�́A%d\t���ς́A%.2f", gokei, heikin);

}

void keisan(int n1, int n2, int* sum, float* ave) {
	*sum = n1 + n2;
	*ave = (float)*sum / 2;
	return;
}