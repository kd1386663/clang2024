#include <stdio.h>
void hyouji(char moji);
main()
{
	char moji;
	printf("����(~z�ŏI��)");
	moji = getchar();
	hyouji(moji);
	while (moji != EOF) {
		printf("\n����(~z�ŏI��)");
		moji = getchar();
		hyouji(moji);
	}
	
}

void hyouji(char moji) {
	char dumy[256];
	putchar(moji);
	putchar('\n');
	gets(dumy);
}