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
	printf("何で検索しますか？(1:生まれ年 2:生まれ月 3:血液型)");
	scanf("%d", &j);
	switch (j){
	case 1:
		printf("生まれ年を入力");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.nen == k) {
				printf("%sーー%d年%d月%d日生 血液型ー%s型\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	case 2:
		printf("生まれ月を入力");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.tuki == k) {
				printf("%sーー%d年%d月%d日生 血液型ー%s型\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	case 3:
		printf("生まれ日を入力");
		scanf("%d", &k);
		for (i = 0; i < NIN; i++) {
			if ((p_data + i)->date.hi == k) {
				printf("%sーー%d年%d月%d日生 血液型ー%s型\n", (p_data + i)->name, (p_data + i)->date.nen, (p_data + i)->date.tuki, (p_data + i)->date.hi, (p_data + i)->blood);
			}
		}
		break;
	}

	
}