#include <stdio.h>
#define QUEUSIZE 8
int queue[QUEUSIZE];
int head = 0;
int tail = 0;
//�v���g�^�C�v�錾
void display(void);
int enqueue(int d);
int dequeue(int* pd);
//���C��
main()
{
	int key, data, result;
	do {
		printf("\n\n���~�L���[��i�A�f�L���[��o����͂��ā�");
		key = getche();
		printf("\n");

		//�G���L���[
		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n�������L���[����t�ł�������\n");
			}
			else {
				display();
			}
		}
		//�f�L���[
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n�������L���[����ł�������\n");
			}
			else{
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}
//�L���[�\���֐�
void display(void) {
	int i;
	printf("\n���������݂̃L���[�̓��e������\n");
	for (i = 0; i < QUEUSIZE; i++) {
		printf("pueue[%2d]��%5d", i, queue[i]);
		if (i == head) {
			printf("��head�������Ă��鏊(����head��%d)", head);//�m�F�p
		}
		if (i == tail) {
			printf("��tail�������Ă��鏊(����tail��%d)", tail);
		}
		printf("\n");
	}
	return;
}
//�L���[�Ƀf�[�^������(�G���L���[����)�֐�
int enqueue(int d) {
	if ((tail + 1) % QUEUSIZE == head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUSIZE;
	return 0;
}

int dequeue(int* pd) {
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUSIZE;
	return 0;
}
