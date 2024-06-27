#include <stdio.h>
main(){
	int i, s;
	int d[10] ;
	srand(time(0));//乱数を初期化(シャッフル)する
	rand(0);//乱数を均一化する
	for (i = 0; i < 10; i++) {
		d[i] = rand() % 30 + 1;
	}
	printf("探索値を入力:");
	scanf("%d", &s);
	
	for (i = 0; i < 10; i++) {
		if (d[i] == s) {
			printf("見つかった\n");
			break;
		}
		
	}
	if (i == 10) {
		printf("入力データ%dは見つからなかった\n", s);
	}
}