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
	struct fruit data;
	strcpy(data.name, "peach");
	data.price = 300;
	data.point = 5;
	data.number = 3;
	data.total = data.price * data.number;

	printf("¤•i–¼:\t\t%s\n", data.name);
	printf("‰¿Ši:\t\t%d‰~\n", data.price);
	printf("‚¨Š©‚ß“x:\t");
	for (int i = 0; i < data.point; i++) {
		printf("š");
	}
	printf("\nŒÂ”:\t\t%dŒÂ\n", data.number);
	printf("‹àŠz:\t\t%d-\n", data.total);
}