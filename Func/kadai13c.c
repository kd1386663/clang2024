#include <stdio.h>
void irekae(int *n1, int *n2);
main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("�֐����s�O�̒l:\n");
	printf("a = %d\tb = %d\n",a,b);
	irekae(&a, &b);
	printf("�֐����s��̒l:\n");
	printf("a = %d\tb = %d\n", a, b);
}
void irekae(int *n1, int *n2) {
	int w;
	w = *n1;
	*n1 = *n2;
	*n2 = w;
}
