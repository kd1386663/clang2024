#include <stdio.h>
main()
{
	char *p = "Nippon";
	int cnt;
	printf("逆順に表示すると");
	for (cnt = 0; *p; cnt++) {
		*p++;
	}
	while (cnt >= 0) {
		putchar(*p--);
		cnt--;
	}
}