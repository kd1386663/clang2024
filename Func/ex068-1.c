#include <stdio.h>
main()
{
	int a, b, c,d, ret;
	printf("‚R‚Â‚Ì®”‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	ret = scanf("%d%d%d%d", &a, &b, &c,&d);
	printf("ret = %d a = %d b = %d c = %d\n", ret, a, b, c);
	printf("®”‚ğ“ü—Í@iCtrl+Z‚ÅI—¹) a:");
	while (scanf("%d%d", &a,&b) != EOF) {
		printf("a = %d\n", a);
		printf("®”‚ğ“ü—Í(Ctrl+Z) a:");
	}
}