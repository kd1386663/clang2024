#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int un ,i;

	srand(time(0));//—”‚ğ‰Šú‰»(ƒVƒƒƒbƒtƒ‹)‚·‚é
	rand(0);//—”‚ğ‹Ïˆê‰»‚·‚é
	
	
	for (i = 0; i < 100; i++ ) {
		un = rand() % 300 + 1;
		
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%3.d ",un);
	}


}