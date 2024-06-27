#include <stdio.h>
main()
{
	int i;
	char c;
	printf("１０進数の整数？");
	scanf("%d", &i);
	printf("アルファベット（o or h or d）？");
	scanf("%*c%c", &c);
	switch (c) {
		case 'o':
			printf("%o", i);
			break;
		case 'h':
			printf("%x", i);
			break;
		case 'd':
			printf("%d", i);
			break;
		default:
			printf("%d", i);
			break;
	}
}