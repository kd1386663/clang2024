#include <stdio.h>
main()
{
	int ia ,cnt;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H");
	scanf("%d", &ia);
	if (ia > 90) {
		cnt = 5;
	}
	else if (ia > 80) {
		cnt = 4;
	}
	else if (ia > 50) {
		cnt = 3;
	}
	else if (ia > 30) {
		cnt = 2;
	}
	else {
		cnt = 1;
	}
	printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu%dv‚Å‚·", cnt);
}