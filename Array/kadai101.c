#include <stdio.h>
main()
{
	int x,y, a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} ,{ 16,17,18,19,20 },{21,22,23,24,25} };
	for (x = 0; x <= 4; x++) {
		for (y = 0; y <= 4; y++) {
			printf(" %2.d", a[x][y]);
		}
		printf("\n");
	}
	
}