#include <stdio.h>
main() {
	int i,target,work, data[20];
	work = 0;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
		printf("%3.d ", data[i]);
	}
	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	printf("\n");
	for (i = 0; i < 20; i++) {
		target = rand() % 20 ;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("%3.d ", data[i]);
	}

}