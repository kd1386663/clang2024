#include <stdio.h>
#include <string.h>
#define NIN 5
	struct syohin_data {
		char name[20];
		int birth[3];
		char blood[5];
	}
main() {
	
	struct syohin_data data[NIN];
	struct syohin_data* p_data;
	int i;
	p_data = data;
	for (i = 0; i < NIN; i++) {
		printf("%d人目(名前)：",i + 1);
		scanf("%s", (p_data->name));
		printf("%d人目(生年月日)：",i + 1);
		scanf("%d%d%d", &(p_data + i)->birth[0], &(p_data + i)->birth[1], &(p_data + i)->birth[2]);
		printf("%d人目(血液型)：",i + 1);
		scanf("%s", (p_data + i)->blood);
		
	}
	for (i = 0; i < NIN; i++) {
		printf("%sーー%d年%d月%d日生 血液型ー%s型\n", (p_data + i)->name, (p_data + i)->birth[0], (p_data + i)->birth[1], (p_data + i)->birth[2], (p_data + i)->blood);
	}
}