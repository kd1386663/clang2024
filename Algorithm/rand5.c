#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int un ,i;

	srand(time(0));//������������(�V���b�t��)����
	rand(0);//�������ψꉻ����
	
	
	for (i = 0; i < 100; i++ ) {
		un = rand() % 300 + 1;
		
		if (i % 10 == 0) {
			printf("\n");
		}
		printf("%3.d ",un);
	}


}