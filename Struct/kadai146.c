#include <stdio.h>
struct fruit {
	char name[30];  //���O
	int price;      //���i
	int point;      //�����ߓx
	int number;     //��
	int total;      //���z
};

main()
{
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	struct fruit* p;
	p = data;
	int gokei = 0;
	for (int i = 0; i < 3; i++) {
		p->total = p->price * p->number;
		printf("���i��:\t\t%s\n", p->name);
		printf("���i:\t\t%d�~\t", p->price);
		printf("�����ߓx:\t%d�|�C���g",p->point);
		printf("\n��:\t\t%d��\t", p->number);
		printf("���z:\t\t��%d-\n", p->total);
		printf("\n\n");
		gokei += p->total;
		p++;
	}
	printf("���v���z = ��%d-", gokei);
	

	
}