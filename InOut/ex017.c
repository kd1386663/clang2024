#include  <stdio.h>
main()
{
	float no1;
	float no2;
	float no3;
	float all;
	printf("��ڂ̎���");
	scanf("%f", &no1);
	printf("��ڂ̎���");
	scanf("%f", &no2);
	printf("�O�ڂ̎���");
	scanf("%f", &no3);
	all = no1 + no2 + no3;
	printf("���v=%3.2f\n", all);
	printf("����=%3.2f\n", all / 3);

}