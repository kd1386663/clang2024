#include <stdio.h>
main()
{
	int no ,plas;
	no = 0;
	plas = 1;
	no += plas;
	printf("%d", plas);
	while ( no <= 300){
		plas ++;
		printf("+%d", plas);
		no += plas;
	}
	printf("=%d", no);
}