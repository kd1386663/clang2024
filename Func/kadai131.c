#include <stdio.h>
void hyouji(char moji);
main()
{
	char moji;
	printf("文字(~zで終了)");
	moji = getchar();
	hyouji(moji);
	while (moji != EOF) {
		printf("\n文字(~zで終了)");
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