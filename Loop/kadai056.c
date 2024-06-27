#include <stdio.h>
main()
{
	int i;
	char c;
	printf("アルファベット小文字？");
	scanf("%c", &c);
	for (i = 0; c  <= 0x7A; c++) {
		printf("%c ", c );
	}
}