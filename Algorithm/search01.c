#include <stdio.h>
main(){
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
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