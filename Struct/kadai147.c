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
		printf("�������j���[�iX�̓��͂ŏI�����܂��j\n");
			printf(" 1:�f�[�^�\�� 2:�f�[�^�ǉ� 3:�f�[�^����\t�����́H  ");
			scanf("%d", &i);
			switch (i) {
			case 1:
				for (j = 0; j < data_cnt; j++) {
					printf("�ԍ�:\t%d\t", p_data->no);
					printf("���O:\t\t%s\t", p_data->name);
					printf("�F:\t\t%s\n", p_data->color);
					p_data++;
					
				}
			    break;
			case 2:
				p_data += data_cnt;
				printf("�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă��������B");
				printf("�ԍ�> ");
				scanf("%d", &p_data->no);
				printf("���O> ");
				scanf("%s", &p_data->name);
				printf("�F> ");
				scanf("%s", &p_data->color);
				data_cnt++;
				break;
			case 3:
				printf("��������F> ");
				scanf("%s", &search);
				printf("��������\n");
				for (j = 0; j < data_cnt; j++) {
					if (strcmp(search,p_data->color) == 0) {
						printf("�ԍ�:\t%d\t", p_data->no);
						printf("���O:\t\t%s\t", p_data->name);
						printf("�F:\t\t%s\n", p_data->color);
					}
					p_data++;
				}
				break;

			}
	}
	
}