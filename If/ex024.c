#include <stdio.h>
main()
{
	char moji;
	printf("���������\n");
	scanf("%c", &moji);
	if (moji >= 'A' && moji = < 'Z') {// moji > 0x40 && moji < 0x5B
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}