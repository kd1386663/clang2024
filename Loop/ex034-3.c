#include <stdio.h>
main()
{
	int su,loop,loop2 ;
	su = 0;
	loop = 0; 
	loop2 = 0;
	printf("êîÇÕÅH");
	scanf("%d", &su);
	do {
		/*for (loop = 1; loop <= 5; loop++) {
		printf("*");
		}*/
		loop++;
		loop2 = 0;
		do {
			printf("*");
			loop2++;
		} while (loop2 < loop);
		printf("\n");
	} while (su > loop);

}