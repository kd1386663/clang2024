#include <stdio.h>
main()
{
	int ia;
	printf("�����H");
	scanf("%d", &ia);
	if (ia < 0) {
		printf("���͒l�́u�}�C�i�X�v�ł�\n");
	}
	else if (ia > 0) {
		printf("���͒l�́u�v���X�v�ł�\n");
	}
	else {
		printf("���͒l�́u�[���v�ł�\n");
	}
}