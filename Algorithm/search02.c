#include <stdio.h>
main() {
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	printf("�T���l�����:");
	scanf("%d", &s);
	d[11] = s;
	for (i = 0; d[i] != s; i++);
	if (i == 11) {
		printf("���̓f�[�^%d�͌�����Ȃ�����\n", s);
	}
	else {
		printf("��������\n");
	}
}