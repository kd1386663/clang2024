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
	printf("–¼‘O‚ð“ü—ÍF");
	gets(p_data->name);
	printf("¶”NŒŽ“ú‚ð‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &p_data->birth[0], &p_data->birth[1], &p_data->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s", p_data->blood);
	printf("%s[[%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%sŒ^", p_data->name, p_data->birth[0], p_data->birth[1], p_data->birth[2], p_data->blood);
}