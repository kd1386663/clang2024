#include <stdio.h>
main()
{
	int i;
	char c;
	printf("アルファベット大文字？");
	scanf("%c", &c);
	for (i = 0; c  <= 0x5A; c++) {
		printf("%c ", c );
	}
}