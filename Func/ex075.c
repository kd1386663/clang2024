#include <stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main() 
{
	int a, b,c,d,e,f;
	printf("���l�P�H�F");
	scanf("%d", &a);
	printf("���l�Q�H�F");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f);
	printf("���l�P�Ɛ��l�Q�̎l�����Z\n");
	printf(" wa = %d sa = %d seki = %d syou = %d", c, d, e, f);
}
void shisoku(int x, int y, int *wa, int *sa, int *sk, int *syo ){
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}