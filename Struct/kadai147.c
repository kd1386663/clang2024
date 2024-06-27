#include <stdio.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};

main()
{
	struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * p_data = data;
	int i,j, data_cnt = 3;
	char search[10];
	while (1) {
		p_data = data;
		printf("処理メニュー（Xの入力で終了します）\n");
			printf(" 1:データ表示 2:データ追加 3:データ検索\t処理は？  ");
			scanf("%d", &i);
			switch (i) {
			case 1:
				for (j = 0; j < data_cnt; j++) {
					printf("番号:\t%d\t", p_data->no);
					printf("名前:\t\t%s\t", p_data->name);
					printf("色:\t\t%s\n", p_data->color);
					p_data++;
					
				}
			    break;
			case 2:
				p_data += data_cnt;
				printf("データの追加を行いますので入力してください。");
				printf("番号> ");
				scanf("%d", &p_data->no);
				printf("名前> ");
				scanf("%s", &p_data->name);
				printf("色> ");
				scanf("%s", &p_data->color);
				data_cnt++;
				break;
			case 3:
				printf("検索する色> ");
				scanf("%s", &search);
				printf("検索結果\n");
				for (j = 0; j < data_cnt; j++) {
					if (strcmp(search,p_data->color) == 0) {
						printf("番号:\t%d\t", p_data->no);
						printf("名前:\t\t%s\t", p_data->name);
						printf("色:\t\t%s\n", p_data->color);
					}
					p_data++;
				}
				break;

			}
	}
	
}