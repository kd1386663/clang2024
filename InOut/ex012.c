#include <stdio.h>
main()
{
	char moji;
	

	moji = 'A';
	printf("moji : %c\n小文字に変換 = %C\n", moji ,moji + 0x20); //32でも可
}