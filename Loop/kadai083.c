#include <stdio.h>
main()
{
	int i = 0;
	for (;;) {
		i++;
		if (i >= 20) { break; };
		if (i % 2 == 0) {
			continue;
		}
		printf("%d  ", i);
	}
}