#include <stdio.h>
main() {
	int i,target,work, data[20];
	work = 0;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
		printf("%3.d ", data[i]);
	}
	srand(time(0));//乱数を初期化(シャッフル)する
	rand(0);//乱数を均一化する
	printf("\n");
	for (i = 0; i < 20; i++) {
		target = rand() % 20 ;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("%3.d ", data[i]);
	}

}