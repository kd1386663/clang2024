#include <stdio.h>
main() {
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };
	printf("探索値を入力:");
	scanf("%d", &s);
	d[11] = s;
	for (i = 0; d[i] != s; i++);
	if (i == 11) {
		printf("入力データ%dは見つからなかった\n", s);
	}
	else {
		printf("見つかった\n");
	}
}