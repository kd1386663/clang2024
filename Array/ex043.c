#include <stdio.h>
main()
{
	char data[] = "orangetrterg";
	int i;
	i = 0;
	printf("文字列: %s\n",&data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("文字数は%d文字", i );



}