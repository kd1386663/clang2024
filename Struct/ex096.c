
#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display3(struct syohin_data* p_syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	struct syohin_data* p_syohin;
	p_syohin = &syohin;
	display3(p_syohin);
}

void display3(struct syohin_data* p_syohin) {
	printf("%s\t%d\n", p_syohin->name, p_syohin->tanka);
}