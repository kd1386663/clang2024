#include <stdio.h>
main()
{
	char moji[] = "mikan to ringo";
	char* p_moji;
	p_moji = moji;
	printf("‹ó”’‚ğœ‚¢‚½”z—ñ“à—e = ");
	while (*p_moji) {
		putchar(*p_moji++);
		if (*p_moji == ' ') {
			*p_moji++;
		}
	}
}