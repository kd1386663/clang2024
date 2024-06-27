#include <stdio.h>
main()
{
	int gokei, ia,cnt;
	float ave;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚Ä\n");
	scanf("%d", &ia);
	for (cnt = 0; ia != -999; cnt++) {
		gokei += ia;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);

	}
	printf("‡Œv = %d\n", gokei);
	ave = (float)gokei / cnt;
	printf("•½‹Ï = %.2f\n", ave);
}