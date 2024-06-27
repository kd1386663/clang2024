#include <stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	for (int i = 0; *p != '\0'; i++) {
		save[i] = *p++;
		printf("%c", save[i]);
	}
	
}