#include <stdio.h>
main()
{
	int ia ,cnt;
	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &ia);
	if (ia > 90) {
		cnt = 5;
	}
	else if (ia > 80) {
		cnt = 4;
	}
	else if (ia > 50) {
		cnt = 3;
	}
	else if (ia > 30) {
		cnt = 2;
	}
	else {
		cnt = 1;
	}
	printf("���̐��l�̔��茋�ʂ́u%d�v�ł�", cnt);
}