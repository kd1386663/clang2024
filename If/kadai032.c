#include <stdio.h>
main()
{
	int ia;
	printf("整数？");
	scanf("%d", &ia);
	if (ia % 2 == 0) {
		printf("その数は「偶数です」\n");
	}
	else {
		printf("その数は「奇数です」\n");
	}

}