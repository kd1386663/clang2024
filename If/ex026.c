#include <stdio.h>
main()
{
	int year;
	printf("�������\n");
	scanf("%d", &year);
	if (year == 1 || year == 3 || year == 5 || year == 7 || year == 8 || year == 10 || year == 12  ) {
		year = 31;
	}
	else if (year == 2) {
		year = 28;
	}
	else {
		year = 30;
	}
	printf("�ŏI����%d�ł�", year);
}