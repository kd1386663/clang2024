#include <stdio.h>
#include <string.h>
	struct syohin_data {
		char name[20];
		int birth[3];
		char blood[5];
	}
main() {
	
	struct syohin_data data;
	printf("���O����́F");
	gets(data.name);
	printf("���N��������؂��ē��́F");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);
	printf("���t�^����́F");
	scanf("%s", data.blood);
	printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^", data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);
}