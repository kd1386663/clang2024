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
		printf("%d�l��(���O)�F",i + 1);
		scanf("%s", (p_data->name));
		printf("%d�l��(���N����)�F",i + 1);
		scanf("%d%d%d", &(p_data + i)->birth[0], &(p_data + i)->birth[1], &(p_data + i)->birth[2]);
		printf("%d�l��(���t�^)�F",i + 1);
		scanf("%s", (p_data + i)->blood);
		
	}
	for (i = 0; i < NIN; i++) {
		printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", (p_data + i)->name, (p_data + i)->birth[0], (p_data + i)->birth[1], (p_data + i)->birth[2], (p_data + i)->blood);
	}
}