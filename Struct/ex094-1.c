#include <stdio.h>
#include <string.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct syohin_data {
	char name[20];
	struct day date;
	char blood[5];
};
main() {
	
	struct syohin_data data[NIN] = { {"kaito",2005,12,06,"AB"},{"kurihara",2000,03,25,"O"},{"rina",2002,02,20,"AB"},{"kanami",1970,02,17,"A"},{"satou",1988,5,13,"B"}};
	struct syohin_data *p_data;
	int i,j,k;
	p_data = data;
	printf("���Ō������܂����H(1:���܂�N 2:���܂ꌎ 3:���t�^)");
	scanf("%d", &j);
	switch (j){
	case 1:
		printf("���܂�N�����");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.nen == k) {
				printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	case 2:
		printf("���܂ꌎ�����");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.tuki == k) {
				printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	case 3:
		printf("���܂�������");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.hi == k) {
				printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	}

	
}