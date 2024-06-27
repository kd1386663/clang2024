#include <stdio.h>
main()
{
	int num, loop, loop2;
	num = 0;
	loop = 0;
	loop2= 0;
	printf("”‚ÍH");
	scanf("%d", &num);
	for (loop = 1; loop <= num; loop++) {
		
		for (loop2 = 1; loop2 <= num-loop; loop2++ ) {
			printf(" ");
		}
		for (loop2=1; loop2 <= loop; loop2++ ) {
			printf("*");
		}
		
		printf("\n");
	}
}