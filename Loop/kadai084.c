#include <stdio.h>
main()
{
	int i,j,sum = 0,cnt = 0;
	while (1) {
		printf("����1�i�[�X�X�X�ŏI���j�H");
		scanf("%d", &i);
		if (i == -999) { break; };
		if (i <= 0) { 
			continue; 
		}
		printf("����2�i�[�X�X�X�ŏI���j�H");
		scanf("%d", &j);
		if (j == -999) { break; };
		if (j <= 0) {
			continue;
			
		}
		printf("%d / %d = %d ���܂� %d\n", i, j, i / j, i % j);
	}
}