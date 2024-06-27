#include <stdio.h>
struct fruit {
	char name[30];  //–¼‘O
	int price;      //‰¿Ši
	int point;      //‚¨Š©‚ß“x
	int number;     //ŒÂ”
	int total;      //‹àŠz
};

main()
{
	struct fruit data[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	int gokei = 0;
	for (int i = 0; i < 3; i++) {
		data[i].total = data[i].price * data[i].number;
		printf("¤•i–¼:\t\t%s\n", data[i].name);
		printf("‰¿Ši:\t\t%d‰~\t", data[i].price);
		printf("‚¨Š©‚ß“x:\t");
		switch (data[i].point) {
		case 1:
			printf("š™™™™");
			break;
		case 2:
			printf("šš™™™");
			break;
		case 3:
			printf("ššš™™");
			break;
		case 4:
			printf("šššš™");
			break;
		case 5:
			printf("ššššš");
			break;
		}
		printf("\nŒÂ”:\t\t%dŒÂ\t", data[i].number);
		printf("‹àŠz:\t\t%d-\n", data[i].total);
		printf("\n\n");
		gokei += data[i].total;
	}
	printf("‡Œv‹àŠz = %d-", gokei);
	

	
}