#include <stdio.h>
#include <string.h>
	struct syohin_data {
		char name[20];
		int birth[3];
		char blood[5];
	}
main() {
	
	struct syohin_data data;
	struct syohin_data *p_data;
	p_data = &data;
	printf("名前を入力：");
	gets(p_data->name);
	printf("生年月日を区切って入力：");
	scanf("%d%d%d", &p_data->birth[0], &p_data->birth[1], &p_data->birth[2]);
	printf("血液型を入力：");
	scanf("%s", p_data->blood);
	printf("%sーー%d年%d月%d日生 血液型ー%s型", p_data->name, p_data->birth[0], p_data->birth[1], p_data->birth[2], p_data->blood);
}