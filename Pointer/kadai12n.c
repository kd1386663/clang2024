#include <stdio.h>
main()
{
	char *p = "Nippon";
	int cnt;
	printf("�t���ɕ\�������");
	for (cnt = 0; *p; cnt++) {
		*p++;
	}
	while (cnt >= 0) {
		putchar(*p--);
		cnt--;
	}
}