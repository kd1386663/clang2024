#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("変換すると%c", moji + 0x20);
	}
	else if (moji >= 0x61 && moji <= 0x7A) {
		printf("変換すると%c", moji - 0x20);
	}
	else {
		printf("エラー");
	}

}