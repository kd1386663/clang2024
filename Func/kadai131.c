#include <stdio.h>
void hyouji(char moji);
main()
{
	char moji;
	printf("•¶š(~z‚ÅI—¹)");
	moji = getchar();
	hyouji(moji);
	while (moji != EOF) {
		printf("\n•¶š(~z‚ÅI—¹)");
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