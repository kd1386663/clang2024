#include <stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("•ÏŠ·‚·‚é‚Æ%c", moji + 0x20);
	}
	else if (moji >= 0x61 && moji <= 0x7A) {
		printf("•ÏŠ·‚·‚é‚Æ%c", moji - 0x20);
	}
	else {
		printf("ƒGƒ‰[");
	}

}