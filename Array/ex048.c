#include <stdio.h>
main()
{
	int i ,y,z, sum;
	int x[2][2][3] = {{{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}}};
	for (i=0,y = 0,z = 0,sum = 0; z <= 1; z++) {
		printf("アパート%d", z+1);
		for (y = 0; y <= 1; y++) {
			printf(" (%d階):", y+1);
			for (i = 0; i <= 2; i++) {
				printf(" %d", x[z][y][i]);
				sum += x[z][y][i];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます", sum);
}