#include <stdio.h>
struct data {
	char course[20], kyouka[20];
	int tani;
};
main()
{
	struct data data1;
	strcpy(data1.course, "�Q�[���\�t�gI�R�[�X");
	strcpy(data1.kyouka, "C����");
	data1.tani = 8;
	printf("�R�[�X��: %s\n", data1.course);
	printf("���Ȗ�: %s\n", data1.kyouka);
	printf("�P�ʐ�: %d\n", data1.tani);
}