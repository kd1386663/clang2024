#include <stdio.h>
main()
{
	char moji[] = "ringo" ,copy[5];
	char *p_moji,*p_copy;
	p_moji = &moji[0];
	p_copy = &copy[0];
	printf("�z����e = ");
	while (*p_moji) {
		putchar(*p_moji++);
	}
	p_moji = &moji[4];
	printf("\n�t������ = ");
	while(*p_copy++ = *p_moji--);
	p_copy = &copy[0];
	while (*p_copy) {
		putchar(*p_copy++);
	}
}