#include <stdio.h>
void display1(int n1);
void display2(int* n2);

main() 
{
	int a, b;
	printf("���la ?:");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);
	scanf("%d", &d);
	display2(&d);
	printf(" b = %d\n\n", b);
}
void display1(int n1) {
	printf("���la�́A%d�ł��B\n", n1);
	n1 += 10;
	return;
}
void display2(int* n2) {
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}