#include <stdio.h>
main()
{
	int ia ,cnt;
	printf("０から１００までの整数？");
	scanf("%d", &ia);
	if (ia > 90) {
		cnt = 5;
	}
	else if (ia > 80) {
		cnt = 4;
	}
	else if (ia > 50) {
		cnt = 3;
	}
	else if (ia > 30) {
		cnt = 2;
	}
	else {
		cnt = 1;
	}
	printf("その数値の判定結果は「%d」です", cnt);
}