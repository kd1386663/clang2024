#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k;

	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("��������̂��������I\n");

	}
	else {
		printf("�ʏ�U��\n");
	}

}