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
	struct fruit data;
	struct fruit* p;
	p = &data;
	strcpy(p->name, "peach");
	p->price = 300;
	p->point = 5;
	p->number = 3;
	p->total = p->price * p->number;

	printf("���i��:\t\t%s\n", p->name);
	printf("���i:\t\t%d�~\n", p->price);
	printf("�����ߓx:\t%d�|�C���g\n",p->point);
	printf("��:\t\t%d��\n", p->number);
	printf("���z:\t\t��%d-\n", p->total);
}