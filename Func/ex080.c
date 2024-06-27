#include <stdio.h>
//É}ÉNÉç
#define TBL_END 5
int tbl_gokei2(int tbl[]);
main(){
	int a[] = { 10,20,30,40,50 },gokei = 0;
	gokei = tbl_gokei2(a);
	printf("gokei = %d\n", gokei);
}

int tbl_gokei2(int tbl[]) {
	int gokei = 0,i;
	for (i = 0; i < TBL_END; i++) {
		gokei += tbl[i];
	}
	return gokei;
	
}
