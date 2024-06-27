#include <stdio.h>
int asc(int str[]);
int desc(int str[]);
main()
{
	int a[8] = { 6,10,8,2,9,5,1,7 },c[8];
	char array1;
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%s", &array1);
	if (array1 = '¸‡') {
		c = asc(a);
	}
	else if (array1 = '~‡') {
		c = desc(a);
	}

	for (int i = 0; i < 8; i++) {
		printf("%d", a[i]);
	}
}

int asc(int str[]) {
	
	int i, j,w;
	i = 8;
	while (i > 0) {
		j = 0;
		while (j < i) {
			if (strcmp(str[j], str[j + 1]) == 1 ) {
				
			}
		}
	}
	
}