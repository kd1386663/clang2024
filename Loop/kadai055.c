#include <stdio.h>
main()
{
	int i;
	for (i = 0; i < 26; i++) {
		printf("%c ", 0x41 + i);
	}
}