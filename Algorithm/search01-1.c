#include <stdio.h>
main(){
	int i, s;
	int d[10] ;
	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	for (i = 0; i < 10; i++) {
		d[i] = rand() % 30 + 1;
	}
	printf("�T���l�����:");
	scanf("%d", &s);
	
	for (i = 0; i < 10; i++) {
		if (d[i] == s) {
			printf("��������\n");
			break;
		}
		
	}
	if (i == 10) {
		printf("���̓f�[�^%d�͌�����Ȃ�����\n", s);
	}
}