#include <stdio.h>
main()
{
	int i;
	char c;
	printf("�P�O�i���̐����H");
	scanf("%d", &i);
	printf("�A���t�@�x�b�g�io or h or d�j�H");
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