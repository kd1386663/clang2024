#include <stdio.h>
main()
{
	int i, j;
	char c;
	printf("����1�H");
	scanf("%d", &i);
	printf("�����Q�H");
	scanf("%d", &j);
	printf("���Z�q�H");
	scanf("%*c%c", &c);
	switch (c) {
		case '+':
			printf("%d + %d = %d\n", i, j, i + j);
			break;
		case '-':
			printf("%d - %d = %d\n", i, j, i - j);
			break;
		case '*':
			printf("%d * %d = %d\n", i, j, i * j);
			break;
		case '/':
			printf("%d / %d = %d\n", i, j, i / j);
			break;

	}
}