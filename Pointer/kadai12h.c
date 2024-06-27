#include <stdio.h>
main()
{
	char moji[] = { "kadai12h.c" };
	char* p_moji;
	p_moji = moji;
	printf("”z—ñ“à—e = ");
	while (*p_moji) {
		putchar(*p_moji++);
	}
}