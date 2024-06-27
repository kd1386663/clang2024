#include <stdio.h>
main()
{
	int score;
	printf("整数を入力:");
	scanf("%d", &score);
	switch (score/10) {
	case 1: 
		printf("10点台です\n");
		break;
	case 2: 
		printf("20点台です\n");
		break;
	case 3: 
		printf("30点代です\n");
		break;
	case 4: 
		printf("40点代です\n");
		break;
	default: 
		printf("エラーです\n");
	}
}