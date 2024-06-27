#include <stdio.h>
main()
{				//”z—ñ‚Ì‰Šú‰»
	int i, a[5], b[3] = {30,60,90};
	for (i = 0; i <= 2; i++) {
		printf("a[%d]=%d\n", i, b[i]);

	}
	for (i = 0; i <= 4; i++) {
		a[i] = (i + 1) * 10;
		printf("a[%d]=%d\n", i, a[i]);
	}

}