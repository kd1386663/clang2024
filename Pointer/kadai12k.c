#include <stdio.h>
main()
{
	char moji[] = "mikan to ringo";
	char* p_moji;
	p_moji = moji;
	printf("�󔒂��������z����e = ");
	while (*p_moji) {
		putchar(*p_moji++);
		if (*p_moji == ' ') {
			*p_moji++;
		}
	}
}