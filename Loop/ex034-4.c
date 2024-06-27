#include <stdio.h>
main()
{
	int su,loop,loop2 ,loop3;
	su = 0;
	loop = 0; 
	loop2 = 0;
	
	printf("êîÇÕÅH");
	scanf("%d", &su);
	
	do {
		/*for (loop = 1; loop <= 5; loop++) {
		printf("*");
		}*/
		loop3 = 0;
		do {
			printf(" ");
			loop3++;
		} while (loop3 < (su - loop));
		loop++;
		loop2 = 0;
		do {
			printf("*");
			loop2++;
		} while (loop2 < loop);
		printf("\n");
	} while (su > loop);

}