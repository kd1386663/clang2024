#include <stdio.h>
int hantei(char moji);
main()
{
	char moji;
	int a;
	printf("�A���t�@�x�b�g�H�F");
	scanf("%c", &moji);
	a = hantei(moji);
	if(a == 1){
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�啶���ł�", a);

	}
	else {
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�������ł�", a);

	}
}
int hantei(char moji) {
	int a = 0;
	if (moji >= 0x41 && moji <= 0x5A) {
		return 1;
	}
	else {
		return 0;
	}
}