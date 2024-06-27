#include <stdio.h>
main()
{
	int i, j;
	char c;
	printf("整数1？");
	scanf("%d", &i);
	printf("整数２？");
	scanf("%d", &j);
	printf("演算子？");
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