#include <stdio.h>
main()
{
	char ia;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &ia);
	/*
	if (ia < 0x5a) {
		printf("���̕����́u�啶���v�ł�\n");
	}
	else {
		printf("���̕����́u�������v�ł�\n");
	}
	*/
	if (ia > 0x40 && ia < 0x5a) {
		printf("�ϊ����ʂ� %c\n",ia + 0x20);
	}
	else if (ia > 0x60 && ia < 0x7a) {
		printf("�ϊ����ʂ� %c\n",ia - 0x20);
	}
	else {
		printf("�ϊ����ʂ� %c\n",ia);
	}

}