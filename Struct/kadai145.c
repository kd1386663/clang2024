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
	int gokei = 0;
	for (int i = 0; i < 3; i++) {
		data[i].total = data[i].price * data[i].number;
		printf("���i��:\t\t%s\n", data[i].name);
		printf("���i:\t\t%d�~\t", data[i].price);
		printf("�����ߓx:\t");
		switch (data[i].point) {
		case 1:
			printf("����������");
			break;
		case 2:
			printf("����������");
			break;
		case 3:
			printf("����������");
			break;
		case 4:
			printf("����������");
			break;
		case 5:
			printf("����������");
			break;
		}
		printf("\n��:\t\t%d��\t", data[i].number);
		printf("���z:\t\t��%d-\n", data[i].total);
		printf("\n\n");
		gokei += data[i].total;
	}
	printf("���v���z = ��%d-", gokei);
	

	
}