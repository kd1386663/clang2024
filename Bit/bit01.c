#include <stdio.h>



main() {
	ChangeFlag(UNIT * s);
	ClearFlag(UNIT * s);
}

while (1) {
	int a;
	DisplayStatus(*s);
	printf("�ǂ̏�Ԃ��������܂����H");
	printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S���� 0:�I��");
	scanf("%d", &a);
	if (a == 0) {
		break;
	}
	switch(a){
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s &= 0;
		default:
			break;
	}
}