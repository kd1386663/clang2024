#include <stdio.h>
main()
{
	char str1[128], str2[128];
	char *p_str1, *p_str2;
	p_str1 = str1;
	p_str2 = str2;
	printf("������P");
	scanf("%s", p_str1);
	printf("������Q");
	scanf("%s", p_str2);
	while (*p_str1) {
		p_str1++;
	}
	while (*p_str1++ = *p_str2++);
	p_str1 = str1;
	printf("str1: %s", p_str1);
}