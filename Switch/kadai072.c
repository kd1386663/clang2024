#include <stdio.h>
main()
{
	char c;
	printf("アルファベット？");
	scanf("%c", &c);
	switch (c){
		case 'a':
			printf("America\n");
			printf("Australia\n");
			break;
		case 'A':
			printf("America\n");
			printf("Australia\n");
			break;
		case 'e':
			printf("England\n");
			break;
		case 'E':
			printf("England\n");
			break;
		case 'f':
			printf("France\n");
		case 'F':
			printf("France\n");
			break;
		case 'j':
			printf("Japan\n");
			break;
		case 'J':
			printf("Japan\n");
	}
}