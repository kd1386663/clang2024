#include <stdio.h>
main()
{
	char moji[256],i;
	printf("����(~z�ŏI��)");
	while (scanf("%s", moji) != EOF) {
		for (i = 0; moji[i] != '\0'; i++);
		while (i >= 0) {
			printf("%c", moji[i]);
			i--;
		}
		printf("\n");
		printf("\n����(~z�ŏI��)");
	}
}

