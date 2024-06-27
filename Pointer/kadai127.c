#include <stdio.h>
main() 
{
	double sum = 0;
	double data[5] = { 10.8, 20.3, 30.6, 40.4, 50.5 };
	double *p_data;
	float i;
	p_data = data;
	printf("”z—ñ‚Ì“à—e\n");
	printf("data[] = ");
	for (i = 0; i < 5; i++) {
		printf(" %.6lf", *p_data);
		sum += *p_data;
		p_data++;

	}
	printf("\n");
	printf("‡Œv = %.3lf\n", sum);
	printf("•½‹Ï = %.3lf\n", sum/5);
	
}