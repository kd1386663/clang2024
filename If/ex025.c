#include <stdio.h>
main()
{
	char moji;
	printf("���������\n");
	scanf("%c", &moji);
	if (moji >= 0x30 && moji <= 0x39){
		printf("�����ł�\n");
	}
	else if ((moji > 0x40 && moji < 0x5B) ||( moji > 0x60 && moji < 0x7B)) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		printf("���̑��̕����ł�\");
	}
}