#include <stdio.h>
main()
{
	int a, b, c,d, ret;
	printf("３つの整数を空白で区切って入力:");
	ret = scanf("%d%d%d%d", &a, &b, &c,&d);
	printf("ret = %d a = %d b = %d c = %d\n", ret, a, b, c);
	printf("整数を入力　（Ctrl+Zで終了) a:");
	while (scanf("%d%d", &a,&b) != EOF) {
		printf("a = %d\n", a);
		printf("整数を入力(Ctrl+Z) a:");
	}
}