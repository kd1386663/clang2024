#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;

	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	kazu = rand();
	printf("��������������%d�ł�\n", kazu);

}