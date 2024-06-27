#include <stdio.h>
main()
{
	int i;
	float box[3],sum,ave;
	sum = 0;
	ave = 0;
	for (i = 0; i <= 2; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
			ave++;
	}
	for (i = 0; i <= 2; i++) {
		sum += box[i];
	}
	printf("‡Œv‚Í %.2f ‚Å‚·\n•½‹Ï‚Í%.2f ‚Å‚·\n", sum,sum/ave);

}