#include <stdio.h>
main()
{
	int ia,ib;
	printf("整数１？");
	scanf("%d", &ia);
	printf("整数２？");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%dのほうが%dより%d大きい\n",ia,ib,ia - ib);
	}
	else if (ia < ib) {
		printf("%dのほうが%dより%d小さい\n",ia,ib,ib - ia);
	}
	else {
		printf("%dと%dは等しい\n",ia,ib);
	}
}