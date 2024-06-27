#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k;

	srand(time(0));//乱数を初期化(シャッフル)する
	rand(0);//乱数を均一化する
	k = rand() % 100 + 1;
	if (k <= 30) {
		printf("かいしんのいちげき！\n");

	}
	else {
		printf("通常攻撃\n");
	}

}