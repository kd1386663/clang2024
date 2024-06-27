#include<stdio.h>
main()
{
	int i,y, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	y = 0;
	gokei = 0;
	while( y <= 1){
		i = 0;
		while( i <= 2) {
			printf("a[%d][%d] = %d\n",y ,i, a[0][i]);
			gokei += a[y][i];
			i++;
			
		}
		y++;
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", y, gokei);
	}
	
	
}