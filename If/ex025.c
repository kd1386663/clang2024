#include <stdio.h>
main()
{
	char moji;
	printf("文字を入力\n");
	scanf("%c", &moji);
	if (moji >= 0x30 && moji <= 0x39){
		printf("数字です\n");
	}
	else if ((moji > 0x40 && moji < 0x5B) ||( moji > 0x60 && moji < 0x7B)) {
		printf("アルファベットです\n");
	}
	else {
		printf("その他の文字です\");
	}
}