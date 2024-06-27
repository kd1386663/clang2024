#include <stdio.h>
main()
{
	char *p = "Nippon";
	int cnt;
	printf("‹t‡‚É•\Ž¦‚·‚é‚Æ");
	for (cnt = 0; *p; cnt++) {
		*p++;
	}
	while (cnt >= 0) {
		putchar(*p--);
		cnt--;
	}
}