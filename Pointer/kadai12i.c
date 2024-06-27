#include <stdio.h>
main()
{
	char moji[] = { "mikan" },copy[5];
	char* p_moji,*p_copy;
	p_moji = moji;
	p_copy = copy;
	printf("ƒRƒs[æ‚Ì•¶š” = ");
	while (*p_copy++ = *p_moji++);
	p_copy = copy;

	while (*p_copy){
		putchar(*p_copy++);
	}
}