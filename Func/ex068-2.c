#include <stdio.h>
main()
{
	char str[256];
	while (gets(str) != NULL) {
		puts(str);//()かっこの文字列をそのまま出力して
			    //改行文字(\n)を末尾に追加する
	}
}