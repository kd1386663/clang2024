#include <stdio.h>
void renketu(char* moji1, char* moji2);
main()
{
	char moji1[256] = "�֐�", moji2[] = "�킩�邩�ȁH";
	printf("�z�� moji1: %s\n", moji1);
	printf("�z�� moji2: %s\n", moji2);
	renketu(moji1, moji2);
	printf("�A��������̕����� \nmoji1:%s",moji1);
	

}
void renketu(char* moji1, char* moji2) {
	while (*moji1) {
		moji1++;
	}
	while (*moji2) {
		*moji1++ = *moji2++;
	}
}
