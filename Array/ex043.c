#include <stdio.h>
main()
{
	char data[] = "orangetrterg";
	int i;
	i = 0;
	printf("������: %s\n",&data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d����", i );



}