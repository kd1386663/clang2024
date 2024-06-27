#include  <stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);
main() {
	int key, data, result;
	do {
		printf("\n\n���v�b�V����i�A�|�b�v��o����͂��ā�");
		key = getche();
		printf("\n");
		//�v�b�V������
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n�������X�^�b�N����t�ł�������\n");
			}
			else {
				display();
				sp++;
			}
		}
		//�|�b�v����
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n�������X�^�b�N����ł�������\n");
			}
			else {
				printf("�X�^�b�N����f�[�^�i%d�j�����o���܂���\n",data);
				display();
				
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;
	printf("\n���������݂̃X�^�b�N�̓��e������\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]��%5d", i, stack[i]);
		if (i == sp) {
			printf("��sp�������Ă��鏊(����sp��%d)", sp);//�m�F�p
		}
		printf("\n");
	}
	return;
}
int push(int d) {
	if (stack[STACKSIZE-1] != 0) { return -1; }
	/*
	if (stack[sp] == 0) {
		stack[sp] = d;
	}
	*/
	stack[sp] = d;
	return 0;
}
int pop(int* pd) {
	if (stack[0] == 0) { return -1; }
	if (sp != 0) {
		sp--;
		*pd = stack[sp];
	}
	stack[sp] = 0;
	
	return 0;
}