#include <stdio.h>
main()
{
	char moji[] = "mikan to ringo";
	char* p_moji;
	p_moji = moji;
	printf("空白を除いた配列内容 = ");
	while (*p_moji) {
		putchar(*p_moji++);
		if (*p_moji == ' ') {
			*p_moji++;
		}
	}
}