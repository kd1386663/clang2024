#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int ans ,num,cnt;

	srand(time(0));//乱数を初期化(シャッフル)する
	rand(0);//乱数を均一化する
	ans = rand() % 100 + 1;
	
	printf("数あてゲーム\n");
	printf("１〜１００までの数を少ない回数であてるゲーム\n");
	cnt = 0;
	while (1) {
		printf("数(１〜１００)を入力:");
		scanf("%d", &num);
		cnt++;
		if (ans > num){
			printf("%dより大きいです\n\n", num);
		}
		else if (ans < num) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("あたり！%d回で当てました\n", cnt);
		}
	}


}