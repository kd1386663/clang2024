#include <stdio.h>
void cnt(char moji , int su);
main()
{
	int su;
	char moji;
	printf("�����H�F");
	scanf("%c", &moji);
	printf("�����H�F");
	scanf("%d", &su);
	cnt(moji,su);
}
void cnt(char moji,int su) {
	int cnt;
	for (cnt = 0; su > cnt; cnt++) {
		printf("%c",moji);
	}
}