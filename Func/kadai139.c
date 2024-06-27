#include <stdio.h>
void cnt(char moji , int su);
main()
{
	int su;
	char moji;
	printf("文字？：");
	scanf("%c", &moji);
	printf("整数？：");
	scanf("%d", &su);
	cnt(moji,su);
}
void cnt(char moji,int su) {
	int cnt;
	for (cnt = 0; su > cnt; cnt++) {
		printf("%c",moji);
	}
}