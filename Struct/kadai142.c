#include <stdio.h>
struct data {
	char course[20], kyouka[20];
	int tani;
};
main()
{
	struct data data1;
	struct data* p;
	p = &data1;
	strcpy(p->course, "�Q�[���\�t�gI�R�[�X");
	strcpy(p->kyouka, "C����");
	p->tani = 8;
	printf("�R�[�X��: %s\n", p->course);
	printf("���Ȗ�: %s\n", p->kyouka);
	printf("�P�ʐ�: %d\n", p->tani);
}