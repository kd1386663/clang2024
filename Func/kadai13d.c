#include <stdio.h>
void renketu(char* moji1, char* moji2);
main()
{
	char moji1[256] = "関数", moji2[] = "わかるかな？";
	printf("配列 moji1: %s\n", moji1);
	printf("配列 moji2: %s\n", moji2);
	renketu(moji1, moji2);
	printf("連結した後の文字列 \nmoji1:%s",moji1);
	

}
void renketu(char* moji1, char* moji2) {
	while (*moji1) {
		moji1++;
	}
	while (*moji2) {
		*moji1++ = *moji2++;
	}
}
