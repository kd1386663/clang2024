#include <stdio.h>
int hantei(char moji);
main()
{
	char moji;
	int a;
	printf("アルファベット？：");
	scanf("%c", &moji);
	a = hantei(moji);
	if(a == 1){
		printf("戻り値は、%dなので入力した文字は、大文字です", a);

	}
	else {
		printf("戻り値は、%dなので入力した文字は、小文字です", a);

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