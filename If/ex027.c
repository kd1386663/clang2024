#include <stdio.h>
main()
{
	char moji;
	printf("���������");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("�ϊ������%c", moji + 0x20);
	}
	else if (moji >= 0x61 && moji <= 0x7A) {
		printf("�ϊ������%c", moji - 0x20);
	}
	else {
		printf("�G���[");
	}

}