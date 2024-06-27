#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int enemy ,player;
	int i ;

	srand(time(0));//乱数を初期化(シャッフル)する
	rand(0);//乱数を均一化する
	enemy = rand() % 3;
	printf("何を出しますか?\n");
	printf("(１：グー　2：チョキ　３：パー) >");
	scanf("%d", &player);
	switch (player) {
		case 1:
			printf("\nプレイヤーは、グーです\n");
			break;
		case 2:
			printf("\nプレイヤーは、チョキです\n");
			break;
		case 3:
			printf("\nプレイヤーは、パーです\n");
			break;
	}
	switch (enemy) {
	case 0:
		printf("コンピュータは、グーです\n");
		break;
	case 1:
		printf("コンピュータは、チョキです\n");
		break;
	case 2:
		printf("コンピュータは、パーです\n");
		break;
	}

	switch (player) {
	case 1://グー
		switch (enemy) {
		case 0:
			i = 2;
			break;
		case 1:
			i = 1;
			break;
		case 2:
			i = 0;
		}
		break;
	case 2://チョキ
		switch (enemy) {
		case 0:
			i = 0;
				break;
		case 1:
			i = 2;
				break;
		case 2:
			i = 1;
		}
		break;
	case 3:
		switch (enemy) {
		case 0:
			i = 1;
				break;
		case 1:
			i = 0;
				break;
		case 2:
			i = 2;
			break;
		}
	}
	
	switch (i) {// ((plyer - 1) - enemy + 3) % 3
	case 0:
		printf("\nプレイヤーの負けです\n");
		break;
	case 1:
		printf("\nプレイヤーの勝ちです\n");
		break;
	case 2:
		printf("\nあいこです\n");
	}


}