#include <stdio.h>
main()
{
	int i,sum = 0,cnt = 0;
	while (1) {
		printf("�����i�[�X�X�X�ŏI���j�H");
		scanf("%d", &i);
		if (i == -999) { break; };
		if (i < 0) { 
			continue; 
		}
		sum += i;
		cnt++;
	}
	printf("���v = %d\n", sum);
	printf("���� = %.3f\n", (float)sum / cnt);
}