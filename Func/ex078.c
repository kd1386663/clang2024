#include <stdio.h>
int tbl_gokei1(int* p);
int tbl_gokei2(int tbl[]);
int tbl_gokei1b(int* p);
int tbl_gokei1c(int* p);

main(){
	int a[] = { 10,20,30,40,-999 },gokei = 0;
	gokei = tbl_gokei1(a);
	printf("gokei = %d\n", gokei);
	gokei = tbl_gokei2(a);
	printf("gokei = %d\n", gokei);
	gokei = tbl_gokei1b(a);
	printf("gokei = %d\n", gokei);
	gokei = tbl_gokei1c(a);
	printf("gokei = %d\n", gokei);
}
int tbl_gokei1(int* p) {
	int gokei = 0;
	while (*p != -999) {
		gokei += *p++;
	}
	return gokei;
}
int tbl_gokei2(int tbl[]) {
	int gokei = 0,i;
	for (i = 0; tbl[i] != -999; i++) {
		gokei += tbl[i];
	}
	return gokei;
	
}

int tbl_gokei1b(int* p) {
	int gokei = 0, i;
	i = 0;
	while (*(p+i) != -999) {
		gokei += *(p+i);
		i++;
	}
	return gokei;
}

int tbl_gokei1c(int* p) {
	int gokei = 0, i;
	i = 0;
	while (p[i] != -999) {
		gokei += p[i];
		i++;
	}
	return gokei;
}

