#include <stdio.h>
main()
{
	char ia;
	printf("アルファベット？");
	scanf("%c", &ia);
	/*
	if (ia < 0x5a) {
		printf("その文字は「大文字」です\n");
	}
	else {
		printf("その文字は「小文字」です\n");
	}
	*/
	if (ia > 0x40 && ia < 0x5a) {
		printf("変換結果は %c\n",ia + 0x20);
	}
	else if (ia > 0x60 && ia < 0x7a) {
		printf("変換結果は %c\n",ia - 0x20);
	}
	else {
		printf("変換結果は %c\n",ia);
	}

}