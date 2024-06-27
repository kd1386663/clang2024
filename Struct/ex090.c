#include <stdio.h>
#include <string.h>
	struct syohin_data {
		char name[20];
		int tanka;
	}
main() {
	
	struct syohin_data syohin;
	struct syohin_data *p;
	p = &syohin;
	printf("¤•i–¼");
	scanf("%s", p->name);
	syohin.tanka = 30;
	printf("syohin1.name = %s\n", syohin.name);
	printf("syohin1.tanka = %d\n", syohin.tanka);
}