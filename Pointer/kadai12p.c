#include <stdio.h>
main()
{
	char* day[] = { "Sundey","Mondey","Tuesday","Wednesday","Thursday","Fridey","Saturday","Satubay",NULL };
	for (int i = 0; day[i] != NULL; i++) {
		printf("%s\n", day[i]);
	}
}