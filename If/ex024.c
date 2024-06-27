#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í\n");
	scanf("%c", &moji);
	if (moji >= 'A' && moji = < 'Z') {// moji > 0x40 && moji < 0x5B
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}