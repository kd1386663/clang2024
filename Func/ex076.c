#include <stdio.h>
void keisan (int n1, int n2,int *sum,float  *ave);
main()
{
	int num1, num2, gokei;
	float heikin;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &num1, &num2 );
	keisan(num1, num2, &gokei, &heikin);
	printf("‡Œv‚ÍA%d\t•½‹Ï‚ÍA%.2f", gokei, heikin);

}

void keisan(int n1, int n2, int* sum, float* ave) {
	*sum = n1 + n2;
	*ave = (float)*sum / 2;
	return;
}