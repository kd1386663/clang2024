#include <stdio.h>
main()
{
	int i;
	float box[3],sum,ave;
	sum = 0;
	ave = 0;
	for (i = 0; i <= 2; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
			ave++;
	}
	for (i = 0; i <= 2; i++) {
		sum += box[i];
	}
	printf("���v�� %.2f �ł�\n���ς�%.2f �ł�\n", sum,sum/ave);

}