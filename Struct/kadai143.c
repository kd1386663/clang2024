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
	strcpy(data.name, "peach");
	data.price = 300;
	data.point = 5;
	data.number = 3;
	data.total = data.price * data.number;

	printf("���i��:\t\t%s\n", data.name);
	printf("���i:\t\t%d�~\n", data.price);
	printf("�����ߓx:\t");
	for (int i = 0; i < data.point; i++) {
		printf("��");
	}
	printf("\n��:\t\t%d��\n", data.number);
	printf("���z:\t\t��%d-\n", data.total);
}